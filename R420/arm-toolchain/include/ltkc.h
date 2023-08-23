
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


#ifndef _LTKC_H
#define _LTKC_H

#include "ltkc_platform.h"
#include "ltkc_base.h"

#include "ltkc_frame.h"
#include "ltkc_xmltext.h"
#include "ltkc_connection.h"

#include "out_ltkc.h"

/* for passing version information as a define */
#define STRINGIFY(x) XSTRINGIFY(x)
#define XSTRINGIFY(x) #x

#include "version.inc"


extern LLRP_tSTypeRegistry *
LLRP_getTheTypeRegistry (void);


#endif /* !_LTKC_H */

