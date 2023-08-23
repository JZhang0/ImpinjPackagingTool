
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




struct LLRP_SFrameExtract;
struct LLRP_SFrameDecoder;
struct LLRP_SFrameDecoderStream;
struct LLRP_SFrameEncoder;
struct LLRP_SFrameEncoderStream;

typedef struct LLRP_SFrameExtract       LLRP_tSFrameExtract;
typedef struct LLRP_SFrameDecoder       LLRP_tSFrameDecoder;
typedef struct LLRP_SFrameDecoderStream LLRP_tSFrameDecoderStream;
typedef struct LLRP_SFrameEncoder       LLRP_tSFrameEncoder;
typedef struct LLRP_SFrameEncoderStream LLRP_tSFrameEncoderStream;


struct LLRP_SFrameExtract
{
    enum {
        LLRP_FRAME_UNKNOWN,
        LLRP_FRAME_READY,
        LLRP_FRAME_ERROR,
        LLRP_FRAME_NEED_MORE
    }                           eStatus;

    llrp_u32_t                  MessageLength;
    llrp_u16_t                  MessageType;
    llrp_u8_t                   ProtocolVersion;
    llrp_u32_t                  MessageID;

    unsigned int                nBytesNeeded;
};

struct LLRP_SFrameDecoder
{
    LLRP_tSDecoder              decoderHdr;

    unsigned char *             pBuffer;
    unsigned int                nBuffer;

    unsigned int                iNext;
    unsigned int                BitFieldBuffer;
    unsigned int                nBitFieldResid;
};

extern LLRP_tSFrameExtract
LLRP_FrameExtract (
  const unsigned char *         pBuffer,
  unsigned int                  nBuffer);

struct LLRP_SFrameDecoderStream
{
    LLRP_tSDecoderStream        decoderStreamHdr;

    LLRP_tSFrameDecoder *       pDecoder;
    LLRP_tSFrameDecoderStream * pEnclosingDecoderStream;
    const LLRP_tSTypeDescriptor *pRefType;
    unsigned int                iBegin;
    unsigned int                iLimit;
};

extern LLRP_tSFrameDecoder *
LLRP_FrameDecoder_construct (
  const LLRP_tSTypeRegistry *   pTypeRegistry,
  unsigned char *               pBuffer,
  unsigned int                  nBuffer);


struct LLRP_SFrameEncoder
{
    LLRP_tSEncoder              encoderHdr;

    unsigned char *             pBuffer;
    unsigned int                nBuffer;

    unsigned int                iNext;
    unsigned int                BitFieldBuffer;
    unsigned int                nBitFieldResid;
};

struct LLRP_SFrameEncoderStream
{
    LLRP_tSEncoderStream        encoderStreamHdr;

    LLRP_tSFrameEncoder *       pEncoder;
    LLRP_tSFrameEncoderStream * pEnclosingEncoderStream;
    const LLRP_tSTypeDescriptor *pRefType;
    unsigned int                iBegin;
};

extern LLRP_tSFrameEncoder *
LLRP_FrameEncoder_construct (
  unsigned char *               pBuffer,
  unsigned int                  nBuffer);
