
/*
 *****************************************************************************
 *                                                                           *
 *                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
 *                                                                           *
 * This source code is the sole property of Impinj, Inc.  Reproduction or    *
 * utilization of this source code in whole or in part is forbidden without  *
 * the prior written consent of Impinj, Inc.                                 *
 *                                                                           *
 * (c) Copyright Impinj, Inc. 2007,2010. All rights reserved.                *
 *                                                                           *
 *****************************************************************************/


struct LLRP_SLibXMLTextDecoder;
struct LLRP_SLibXMLTextDecoderStream;
struct LLRP_SXMLTextEncoder;
struct LLRP_SXMLTextEncoderStream;

typedef struct LLRP_SLibXMLTextDecoder         LLRP_tSLibXMLTextDecoder;
typedef struct LLRP_SLibXMLTextDecoderStream   LLRP_tSLibXMLTextDecoderStream;
typedef struct LLRP_SXMLTextEncoder         LLRP_tSXMLTextEncoder;
typedef struct LLRP_SXMLTextEncoderStream   LLRP_tSXMLTextEncoderStream;

struct LLRP_SLibXMLTextDecoder
{
    LLRP_tSDecoder              decoderHdr;
    struct _xmlDoc *     	    doc;
    struct _xmlNode *           pxmlNodeTree;
};

struct LLRP_SLibXMLTextDecoderStream
{
    LLRP_tSDecoderStream        decoderStreamHdr;

    LLRP_tSLibXMLTextDecoder *          pDecoder;
    LLRP_tSLibXMLTextDecoderStream *    pEnclosingDecoderStream;
    struct _xmlNode *                   pTargetNode;
    struct _xmlNode *                   pCurrentChildNode;
    struct _xmlNode *                   pLastFieldNode;
    const LLRP_tSTypeDescriptor *       pRefType;
};

extern LLRP_tSLibXMLTextDecoder *
LLRP_LibXMLTextDecoder_construct (
  const LLRP_tSTypeRegistry *   pTypeRegistry,
  unsigned char *               pBuffer,
  unsigned int                  nBuffer);


struct LLRP_SXMLTextEncoder
{
    LLRP_tSEncoder              encoderHdr;

    unsigned char *             pBuffer;
    unsigned int                nBuffer;

    unsigned int                iNext;

    int                         bOverflow;
};

struct LLRP_SXMLTextEncoderStream
{
    LLRP_tSEncoderStream        encoderStreamHdr;

    LLRP_tSXMLTextEncoder *       pEncoder;
    LLRP_tSXMLTextEncoderStream * pEnclosingEncoderStream;
    const LLRP_tSTypeDescriptor *pRefType;
    unsigned int                nDepth;
};

extern LLRP_tSXMLTextEncoder *
LLRP_XMLTextEncoder_construct (
  unsigned char *               pBuffer,
  unsigned int                  nBuffer);

LLRP_tSLibXMLTextDecoder *
LLRP_LibXMLTextDecoder_construct_file (
  const LLRP_tSTypeRegistry *   pTypeRegistry,
  char *                        fname);

LLRP_tSLibXMLTextDecoder *
LLRP_LibXMLTextDecoder_construct_nodetree (
  const LLRP_tSTypeRegistry *   pTypeRegistry,
  struct _xmlNode *             pNodeTree);
