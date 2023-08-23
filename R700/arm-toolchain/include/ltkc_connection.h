
/*
 *****************************************************************************
 *                                                                           *
 *                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
 *                                                                           *
 * This source code is the sole property of Impinj, Inc.  Reproduction or    *
 * utilization of this source code in whole or in part is forbidden without  *
 * the prior written consent of Impinj, Inc.                                 *
 *                                                                           *
 * (c) Copyright Impinj, Inc. 2007,2008. All rights reserved.                *
 *                                                                           *
 *****************************************************************************/

/**
 *****************************************************************************
 **
 ** @file   ltkc_connection.h
 **
 ** @brief  Types and function prototypes for handling
 **         two-way LLRP message traffic
 **
 *****************************************************************************/


/* Forward type declarations */
struct LLRP_SConnection;
typedef struct LLRP_SConnection     LLRP_tSConnection;
struct bio_st;

/**
 *****************************************************************************
 **
 ** @brief  Structure of an LLRP connection instance
 **
 ** An LLRP connection consists of:
 **     - A file descriptor (fd) likely, but not necessarily, a socket
 **     - An input queue of messages already received. Used to hold
 **       asynchronous messages while awaiting a response.
 **     - Receiver state.
 **         - The receive buffer and count
 **         - Whether a frame is valid. Valid means that the receive
 **           buffer holds a frame and the MessageLength, MessageType,
 **           ProtocolVersion, and MessageID are valid (usable).
 **           Not valid with a nBuffer greater than 0 means that a frame
 **           is being received. Sometimes we want to look at the frame
 **           after it has been (or attempted to be) decoded.
 **         - Top-level frame variables: tSFrameExtract
 **         - Details of the last receiver error, including I/O errors,
 **           end-of-file (EOF), timeout, or decode errors.
 **     - Send state
 **         - The send buffer and count
 **         - Details of the last send error, including I/O errors,
 **           or encode errors.
 **
 *****************************************************************************/

struct LLRP_SConnection
{
    /** The OpenSSL provided socket abstraction */
    struct bio_st *             pBio;

    /** Error message if openConnectionToReader() or close...() fail */
    const char *                pConnectErrorStr;

    /** The registry to consult for message/parameter types during decode. */
    const LLRP_tSTypeRegistry * pTypeRegistry;

    /** Head of queue of messages already received. Probably events.
     ** the queue is a one-way, NULL terminated linked list. */
    LLRP_tSMessage *            pInputQueue;

    /** Size of the send/recv buffers, below, specified at construct() time */
    unsigned int                nBufferSize;

    /** Receive state */
    struct
    {
        /** The buffer. Contains incomming frame. */
        unsigned char *     pBuffer;

        /** Count of bytes currently in buffer */
        unsigned int        nBuffer;

        /** Valid boolean. TRUE means the buffer and frame summary
         ** variables are valid (usable). This is always
         ** FALSE mid receive */
        int                 bFrameValid;

        /** Frame summary variables. Derived by LLRP_FrameExtract() */
        LLRP_tSFrameExtract FrameExtract;

        /** Details of last I/O or decoder error. */
        LLRP_tSErrorDetails ErrorDetails;
    }                           Recv;

    /** Send state */
    struct
    {
        /** The buffer. Contains outgoing frame. */
        unsigned char *     pBuffer;

        /** Count of bytes currently in buffer (from last send) */
        unsigned int        nBuffer;

        /** Details of last I/O or encoder error. */
        LLRP_tSErrorDetails ErrorDetails;
    }                           Send;
};




/*
 * ltkc_connection.c
 */
extern LLRP_tSConnection *
LLRP_Conn_construct (
  const LLRP_tSTypeRegistry *   pTypeRegistry,
  unsigned int                  nBufferSize);
  
extern void
LLRP_Conn_destruct (
  LLRP_tSConnection *           pConn);

extern int
LLRP_Conn_openConnectionToReader (
  LLRP_tSConnection *           pConn,
  const char *                  pReaderHostName);
  
extern int
LLRP_Conn_openSecureConnectionToReader (
  LLRP_tSConnection *           pConn,
  const char *                  pReaderHostName);

extern int
LLRP_Conn_closeConnectionToReader (
  LLRP_tSConnection *           pConn);

extern const char *
LLRP_Conn_getConnectError (
  LLRP_tSConnection *           pConn);

extern LLRP_tSMessage *
LLRP_Conn_transact (
  LLRP_tSConnection *           pConn,
  LLRP_tSMessage *              pSendMessage,
  int                           nMaxMS);

extern const LLRP_tSErrorDetails *
LLRP_Conn_getTransactError (
  LLRP_tSConnection *           pConn);

extern LLRP_tResultCode
LLRP_Conn_sendMessage (
  LLRP_tSConnection *           pConn,
  LLRP_tSMessage *              pMessage);

extern const LLRP_tSErrorDetails *
LLRP_Conn_getSendError (
  LLRP_tSConnection *           pConn);

extern LLRP_tSMessage *
LLRP_Conn_recvMessage (
  LLRP_tSConnection *           pConn,
  int                           nMaxMS);

extern LLRP_tSMessage *
LLRP_Conn_recvResponse (
  LLRP_tSConnection *           pConn,
  int                           nMaxMS,
  const LLRP_tSTypeDescriptor * pResponseType,
  llrp_u32_t                    ResponseMessageID);

extern const LLRP_tSErrorDetails *
LLRP_Conn_getRecvError (
  LLRP_tSConnection *           pConn);

