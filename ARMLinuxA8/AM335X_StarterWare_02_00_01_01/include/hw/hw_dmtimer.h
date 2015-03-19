

/**
 *  @Component:   DMTIMER
 *
 *  @Filename:    hw_dmtimer.h
 *
 ============================================================================ */
/*
* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
*/
/*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



#ifndef _HW_DMTIMER_H_
#define _HW_DMTIMER_H_

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define DMTIMER_TIDR   (0x0)
#define DMTIMER_TIOCP_CFG   (0x10)
#define DMTIMER_IRQ_EOI   (0x20)
#define DMTIMER_IRQSTATUS_RAW   (0x24)
#define DMTIMER_IRQSTATUS   (0x28)
#define DMTIMER_IRQENABLE_SET   (0x2C)
#define DMTIMER_IRQENABLE_CLR   (0x30)
#define DMTIMER_IRQWAKEEN   (0x34)
#define DMTIMER_TCLR   (0x38)
#define DMTIMER_TCRR   (0x3C)
#define DMTIMER_TLDR   (0x40)
#define DMTIMER_TTGR   (0x44)
#define DMTIMER_TWPS   (0x48)
#define DMTIMER_TMAR   (0x4C)
#define DMTIMER_TCAR(n)   (0x50 + (((n) - 1) * 8))
#define DMTIMER_TSICR   (0x54)

/**************************************************************************\ 
 * Field Definition Macros
\**************************************************************************/

/* TIDR */
#define DMTIMER_TIDR_CUSTOM   (0x000000C0u)
#define DMTIMER_TIDR_CUSTOM_SHIFT   (0x00000006u)

#define DMTIMER_TIDR_FUNC   (0x0FFF0000u)
#define DMTIMER_TIDR_FUNC_SHIFT   (0x00000010u)

#define DMTIMER_TIDR_R_RTL   (0x0000F800u)
#define DMTIMER_TIDR_R_RTL_SHIFT   (0x0000000Bu)

#define DMTIMER_TIDR_SCHEME   (0xC0000000u)
#define DMTIMER_TIDR_SCHEME_SHIFT   (0x0000001Eu)
#define DMTIMER_TIDR_SCHEME_HIGHLANDER0P8   (0x1u)
#define DMTIMER_TIDR_SCHEME_LEGACY   (0x0u)

#define DMTIMER_TIDR_X_MAJOR   (0x00000700u)
#define DMTIMER_TIDR_X_MAJOR_SHIFT   (0x00000008u)

#define DMTIMER_TIDR_Y_MINOR   (0x0000003Fu)
#define DMTIMER_TIDR_Y_MINOR_SHIFT   (0x00000000u)


/* TIOCP_CFG */
#define DMTIMER_TIOCP_CFG_EMUFREE   (0x00000002u)
#define DMTIMER_TIOCP_CFG_EMUFREE_SHIFT   (0x00000001u)
#define DMTIMER_TIOCP_CFG_EMUFREE_TIMER_FREE   (0x1u)
#define DMTIMER_TIOCP_CFG_EMUFREE_TIMER_FROZEN   (0x0u)

#define DMTIMER_TIOCP_CFG_IDLEMODE   (0x0000000Cu)
#define DMTIMER_TIOCP_CFG_IDLEMODE_SHIFT   (0x00000002u)
#define DMTIMER_TIOCP_CFG_IDLEMODE_FORCE   (0x0u)
#define DMTIMER_TIOCP_CFG_IDLEMODE_NOIDLE   (0x1u)
#define DMTIMER_TIOCP_CFG_IDLEMODE_SMART   (0x2u)
#define DMTIMER_TIOCP_CFG_IDLEMODE_WAKEUP   (0x3u)

#define DMTIMER_TIOCP_CFG_SOFTRESET   (0x00000001u)
#define DMTIMER_TIOCP_CFG_SOFTRESET_SHIFT   (0x00000000u)
#define DMTIMER_TIOCP_CFG_SOFTRESET_DONE   (0x0u)
#define DMTIMER_TIOCP_CFG_SOFTRESET_INITIATE   (0x1u)
#define DMTIMER_TIOCP_CFG_SOFTRESET_ONGOING   (0x1u)


/* IRQ_EOI */
#define DMTIMER_IRQ_EOI_LINE_NUMBER   (0x00000001u)
#define DMTIMER_IRQ_EOI_LINE_NUMBER_SHIFT   (0x00000000u)


/* IRQSTATUS_RAW */
#define DMTIMER_IRQSTATUS_RAW_MAT_IT_FLAG   (0x00000001u)
#define DMTIMER_IRQSTATUS_RAW_MAT_IT_FLAG_SHIFT   (0x00000000u)
#define DMTIMER_IRQSTATUS_RAW_MAT_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_RAW_MAT_IT_FLAG_PENDING   (0x1u)
#define DMTIMER_IRQSTATUS_RAW_MAT_IT_FLAG_SET   (0x1u)

#define DMTIMER_IRQSTATUS_RAW_OVF_IT_FLAG   (0x00000002u)
#define DMTIMER_IRQSTATUS_RAW_OVF_IT_FLAG_SHIFT   (0x00000001u)
#define DMTIMER_IRQSTATUS_RAW_OVF_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_RAW_OVF_IT_FLAG_PENDING   (0x1u)
#define DMTIMER_IRQSTATUS_RAW_OVF_IT_FLAG_SET   (0x1u)

#define DMTIMER_IRQSTATUS_RAW_TCAR_IT_FLAG   (0x00000004u)
#define DMTIMER_IRQSTATUS_RAW_TCAR_IT_FLAG_SHIFT   (0x00000002u)
#define DMTIMER_IRQSTATUS_RAW_TCAR_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_RAW_TCAR_IT_FLAG_PENDING   (0x1u)
#define DMTIMER_IRQSTATUS_RAW_TCAR_IT_FLAG_SET   (0x1u)


/* IRQSTATUS */
#define DMTIMER_IRQSTATUS_MAT_IT_FLAG   (0x00000001u)
#define DMTIMER_IRQSTATUS_MAT_IT_FLAG_SHIFT   (0x00000000u)
#define DMTIMER_IRQSTATUS_MAT_IT_FLAG_CLEAR   (0x1u)
#define DMTIMER_IRQSTATUS_MAT_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_MAT_IT_FLAG_PENDING   (0x1u)

#define DMTIMER_IRQSTATUS_OVF_IT_FLAG   (0x00000002u)
#define DMTIMER_IRQSTATUS_OVF_IT_FLAG_SHIFT   (0x00000001u)
#define DMTIMER_IRQSTATUS_OVF_IT_FLAG_CLEAR   (0x1u)
#define DMTIMER_IRQSTATUS_OVF_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_OVF_IT_FLAG_PENDING   (0x1u)

#define DMTIMER_IRQSTATUS_TCAR_IT_FLAG   (0x00000004u)
#define DMTIMER_IRQSTATUS_TCAR_IT_FLAG_SHIFT   (0x00000002u)
#define DMTIMER_IRQSTATUS_TCAR_IT_FLAG_CLEAR   (0x1u)
#define DMTIMER_IRQSTATUS_TCAR_IT_FLAG_NONE   (0x0u)
#define DMTIMER_IRQSTATUS_TCAR_IT_FLAG_PENDING   (0x1u)


/* IRQENABLE_SET */
#define DMTIMER_IRQENABLE_SET_MAT_EN_FLAG   (0x00000001u)
#define DMTIMER_IRQENABLE_SET_MAT_EN_FLAG_SHIFT   (0x00000000u)
#define DMTIMER_IRQENABLE_SET_MAT_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_SET_MAT_EN_FLAG_ENABLE   (0x1u)
#define DMTIMER_IRQENABLE_SET_MAT_EN_FLAG_ENABLED   (0x1u)

#define DMTIMER_IRQENABLE_SET_OVF_EN_FLAG   (0x00000002u)
#define DMTIMER_IRQENABLE_SET_OVF_EN_FLAG_SHIFT   (0x00000001u)
#define DMTIMER_IRQENABLE_SET_OVF_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_SET_OVF_EN_FLAG_ENABLE   (0x1u)
#define DMTIMER_IRQENABLE_SET_OVF_EN_FLAG_ENABLED   (0x1u)

#define DMTIMER_IRQENABLE_SET_TCAR_EN_FLAG   (0x00000004u)
#define DMTIMER_IRQENABLE_SET_TCAR_EN_FLAG_SHIFT   (0x00000002u)
#define DMTIMER_IRQENABLE_SET_TCAR_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_SET_TCAR_EN_FLAG_ENABLE   (0x1u)
#define DMTIMER_IRQENABLE_SET_TCAR_EN_FLAG_ENABLED   (0x1u)


/* IRQENABLE_CLR */
#define DMTIMER_IRQENABLE_CLR_MAT_EN_FLAG   (0x00000001u)
#define DMTIMER_IRQENABLE_CLR_MAT_EN_FLAG_SHIFT   (0x00000000u)
#define DMTIMER_IRQENABLE_CLR_MAT_EN_FLAG_DISABLE   (0x1u)
#define DMTIMER_IRQENABLE_CLR_MAT_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_CLR_MAT_EN_FLAG_ENABLED   (0x1u)

#define DMTIMER_IRQENABLE_CLR_OVF_EN_FLAG   (0x00000002u)
#define DMTIMER_IRQENABLE_CLR_OVF_EN_FLAG_SHIFT   (0x00000001u)
#define DMTIMER_IRQENABLE_CLR_OVF_EN_FLAG_DISABLE   (0x1u)
#define DMTIMER_IRQENABLE_CLR_OVF_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_CLR_OVF_EN_FLAG_ENABLED   (0x1u)

#define DMTIMER_IRQENABLE_CLR_TCAR_EN_FLAG   (0x00000004u)
#define DMTIMER_IRQENABLE_CLR_TCAR_EN_FLAG_SHIFT   (0x00000002u)
#define DMTIMER_IRQENABLE_CLR_TCAR_EN_FLAG_DISABLE   (0x1u)
#define DMTIMER_IRQENABLE_CLR_TCAR_EN_FLAG_DISABLED   (0x0u)
#define DMTIMER_IRQENABLE_CLR_TCAR_EN_FLAG_ENABLED   (0x1u)


/* IRQWAKEEN */
#define DMTIMER_IRQWAKEEN_MAT_WUP_ENA   (0x00000001u)
#define DMTIMER_IRQWAKEEN_MAT_WUP_ENA_SHIFT   (0x00000000u)
#define DMTIMER_IRQWAKEEN_MAT_WUP_ENA_DISABLE   (0x0u)
#define DMTIMER_IRQWAKEEN_MAT_WUP_ENA_ENABLE   (0x1u)

#define DMTIMER_IRQWAKEEN_OVF_WUP_ENA   (0x00000002u)
#define DMTIMER_IRQWAKEEN_OVF_WUP_ENA_SHIFT   (0x00000001u)
#define DMTIMER_IRQWAKEEN_OVF_WUP_ENA_DISABLE   (0x0u)
#define DMTIMER_IRQWAKEEN_OVF_WUP_ENA_ENABLE   (0x1u)

#define DMTIMER_IRQWAKEEN_TCAR_WUP_ENA   (0x00000004u)
#define DMTIMER_IRQWAKEEN_TCAR_WUP_ENA_SHIFT   (0x00000002u)
#define DMTIMER_IRQWAKEEN_TCAR_WUP_ENA_DISABLE   (0x0u)
#define DMTIMER_IRQWAKEEN_TCAR_WUP_ENA_ENABLE   (0x1u)


/* TCLR */
#define DMTIMER_TCLR_AR   (0x00000002u)
#define DMTIMER_TCLR_AR_SHIFT   (0x00000001u)
#define DMTIMER_TCLR_AR_AUTO   (0x1u)
#define DMTIMER_TCLR_AR_ONESHOT   (0x0u)

#define DMTIMER_TCLR_CAPT_MODE   (0x00002000u)
#define DMTIMER_TCLR_CAPT_MODE_SHIFT   (0x0000000Du)
#define DMTIMER_TCLR_CAPT_MODE_SECOND   (0x1u)
#define DMTIMER_TCLR_CAPT_MODE_SINGLE   (0x0u)

#define DMTIMER_TCLR_CE   (0x00000040u)
#define DMTIMER_TCLR_CE_SHIFT   (0x00000006u)
#define DMTIMER_TCLR_CE_DISABLE   (0x0u)
#define DMTIMER_TCLR_CE_ENABLE   (0x1u)

#define DMTIMER_TCLR_GPO_CFG   (0x00004000u)
#define DMTIMER_TCLR_GPO_CFG_SHIFT   (0x0000000Eu)
#define DMTIMER_TCLR_GPO_CFG_DRIVE1   (0x1u)
#define DMTIMER_TCLR_GPO_CFG_DRIVE0   (0x0u)

#define DMTIMER_TCLR_PRE   (0x00000020u)
#define DMTIMER_TCLR_PRE_SHIFT   (0x00000005u)
#define DMTIMER_TCLR_PRE_DISABLE   (0x0u)
#define DMTIMER_TCLR_PRE_ENABLE   (0x1u)

#define DMTIMER_TCLR_PT   (0x00001000u)
#define DMTIMER_TCLR_PT_SHIFT   (0x0000000Cu)
#define DMTIMER_TCLR_PT_PULSE   (0x0u)
#define DMTIMER_TCLR_PT_TOGGLE   (0x1u)

#define DMTIMER_TCLR_PTV   (0x0000001Cu)
#define DMTIMER_TCLR_PTV_SHIFT   (0x00000002u)

#define DMTIMER_TCLR_SCPWM   (0x00000080u)
#define DMTIMER_TCLR_SCPWM_SHIFT   (0x00000007u)
#define DMTIMER_TCLR_SCPWM_CLEAR   (0x0u)
#define DMTIMER_TCLR_SCPWM_SET   (0x1u)

#define DMTIMER_TCLR_ST   (0x00000001u)
#define DMTIMER_TCLR_ST_SHIFT   (0x00000000u)
#define DMTIMER_TCLR_ST_START   (0x1u)
#define DMTIMER_TCLR_ST_STOP   (0x0u)

#define DMTIMER_TCLR_TCM   (0x00000300u)
#define DMTIMER_TCLR_TCM_SHIFT   (0x00000008u)
#define DMTIMER_TCLR_TCM_BOTH   (0x3u)
#define DMTIMER_TCLR_TCM_HIGHLOW   (0x2u)
#define DMTIMER_TCLR_TCM_LOWHIGH   (0x1u)
#define DMTIMER_TCLR_TCM_NOCAPTURE   (0x0u)

#define DMTIMER_TCLR_TRG   (0x00000C00u)
#define DMTIMER_TCLR_TRG_SHIFT   (0x0000000Au)
#define DMTIMER_TCLR_TRG_NOTRIGGER   (0x0u)
#define DMTIMER_TCLR_TRG_OVERFLOW   (0x1u)
#define DMTIMER_TCLR_TRG_OVERFLOWANDMATCH   (0x2u)


/* TCRR */
#define DMTIMER_TCRR_TIMER_COUNTER   (0xFFFFFFFFu)
#define DMTIMER_TCRR_TIMER_COUNTER_SHIFT   (0x00000000u)


/* TLDR */
#define DMTIMER_TLDR_LOAD_VALUE   (0xFFFFFFFFu)
#define DMTIMER_TLDR_LOAD_VALUE_SHIFT   (0x00000000u)


/* TTGR */
#define DMTIMER_TTGR_TTGR_VALUE   (0xFFFFFFFFu)
#define DMTIMER_TTGR_TTGR_VALUE_SHIFT   (0x00000000u)


/* TWPS */
#define DMTIMER_TWPS_W_PEND_TCLR   (0x00000001u)
#define DMTIMER_TWPS_W_PEND_TCLR_SHIFT   (0x00000000u)
#define DMTIMER_TWPS_W_PEND_TCLR_NONE   (0x0u)
#define DMTIMER_TWPS_W_PEND_TCLR_PENDING   (0x1u)

#define DMTIMER_TWPS_W_PEND_TCRR   (0x00000002u)
#define DMTIMER_TWPS_W_PEND_TCRR_SHIFT   (0x00000001u)
#define DMTIMER_TWPS_W_PEND_TCRR_NONE   (0x0u)
#define DMTIMER_TWPS_W_PEND_TCRR_PENDING   (0x1u)

#define DMTIMER_TWPS_W_PEND_TLDR   (0x00000004u)
#define DMTIMER_TWPS_W_PEND_TLDR_SHIFT   (0x00000002u)
#define DMTIMER_TWPS_W_PEND_TLDR_NONE   (0x0u)
#define DMTIMER_TWPS_W_PEND_TLDR_PENDING   (0x1u)

#define DMTIMER_TWPS_W_PEND_TMAR   (0x00000010u)
#define DMTIMER_TWPS_W_PEND_TMAR_SHIFT   (0x00000004u)
#define DMTIMER_TWPS_W_PEND_TMAR_NONE   (0x0u)
#define DMTIMER_TWPS_W_PEND_TMAR_PENDING   (0x1u)

#define DMTIMER_TWPS_W_PEND_TTGR   (0x00000008u)
#define DMTIMER_TWPS_W_PEND_TTGR_SHIFT   (0x00000003u)
#define DMTIMER_TWPS_W_PEND_TTGR_NONE   (0x0u)
#define DMTIMER_TWPS_W_PEND_TTGR_PENDING   (0x1u)


/* TMAR */
#define DMTIMER_TMAR_COMPARE_VALUE   (0xFFFFFFFFu)
#define DMTIMER_TMAR_COMPARE_VALUE_SHIFT   (0x00000000u)


/* TCAR1 */
#define DMTIMER_TCAR1_CAPTURED_VALUE   (0xFFFFFFFFu)
#define DMTIMER_TCAR1_CAPTURED_VALUE_SHIFT   (0x00000000u)


/* TSICR */
#define DMTIMER_TSICR_POSTED   (0x00000004u)
#define DMTIMER_TSICR_POSTED_SHIFT   (0x00000002u)
#define DMTIMER_TSICR_POSTED_ACTIVE   (0x1u)
#define DMTIMER_TSICR_POSTED_INACTIVE   (0x0u)

#define DMTIMER_TSICR_SFT   (0x00000002u)
#define DMTIMER_TSICR_SFT_SHIFT   (0x00000001u)
#define DMTIMER_TSICR_SFT_RESETDISABLE   (0x1u)
#define DMTIMER_TSICR_SFT_RESETENABLE   (0x0u)


/* TCAR2 */
#define DMTIMER_TCAR2_CAPTURED_VALUE   (0xFFFFFFFFu)
#define DMTIMER_TCAR2_CAPTURED_VALUE_SHIFT   (0x00000000u)



#ifdef __cplusplus
}
#endif

#endif

