#ifndef __RC2014_SIO_DOT_H__
#define __RC2014_SIO_DOT_H__

/* Needs generalizing and tidying up across the RC2014 systems */

#include "config.h"

#define SIO0_IVT 8

#define SIO0_BASE 0x00
__sfr __at (SIO0_BASE + 0) SIOA_D;
__sfr __at (SIO0_BASE + 1) SIOA_C;
__sfr __at (SIO0_BASE + 2) SIOB_D;
__sfr __at (SIO0_BASE + 3) SIOB_C;

__sfr __at 0xA0 CTC_CH0;
__sfr __at 0xA1 CTC_CH1;
__sfr __at 0xA2 CTC_CH2;
__sfr __at 0xA3 CTC_CH3;

extern void sio2_otir(uint8_t port) __z88dk_fastcall;

extern uint8_t ctc_present;

#endif
