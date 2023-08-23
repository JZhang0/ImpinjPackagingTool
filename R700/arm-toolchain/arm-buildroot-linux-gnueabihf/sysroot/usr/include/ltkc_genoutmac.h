
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


#define SUBPARAM_SET(MEMBER,VALUE)			\
        LLRP_Element_setSubParameterPtr(		\
            (LLRP_tSElement *)pThis,			\
            (LLRP_tSParameter**)&pThis->MEMBER,		\
            (LLRP_tSParameter*)(VALUE))

#define SUBPARAM_ADD(MEMBER,VALUE)			\
        LLRP_Element_addToSubParameterList(		\
            (LLRP_tSElement *)pThis,			\
            (LLRP_tSParameter**)&pThis->MEMBER,		\
            (LLRP_tSParameter*)(VALUE))

#define SUBPARAM_ATTACH(MEMBER,VALUE)			\
        LLRP_Element_attachToSubParameterList(		\
            (LLRP_tSParameter**)&pThis->MEMBER,		\
            (LLRP_tSParameter*)(VALUE))

#define SUBPARAM_CLEAR(MEMBER)				\
        LLRP_Element_clearSubParameterList(		\
            (LLRP_tSElement *)pThis,			\
            (LLRP_tSParameter**)&pThis->MEMBER)

#define SUBPARAM_COUNT(MEMBER)				\
        LLRP_Element_countSubParameterList(		\
            (LLRP_tSElement *)pThis,			\
            (LLRP_tSParameter**)&pThis->MEMBER)
