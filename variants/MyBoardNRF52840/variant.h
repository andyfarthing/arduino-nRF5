/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_MYBOARDNRF52840_
#define _VARIANT_MYBOARDNRF52840_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include <nrf.h>
#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define NRF_GPIO_PIN_MAP(port, pin)   ((port << 5) | (pin & 0x1F))


/* GPIO */
#define GPIO_PRESENT
#define GPIO_COUNT 2

#define P0_PIN_NUM 32
#define P1_PIN_NUM 16

/*
 * Analog pins
 */
#define PIN_A0               (3)  // P0.03
#define PIN_A1               (4)  // P0.04
#define PIN_A2               (28) // P0.28
#define PIN_A3               (29) // P0.29
#define PIN_A4               (30) // P0.30
#define PIN_A5               (31) // P0.31

#define ADC_RESOLUTION    14

// Other pins
#define PIN_NFC1           (9)  // P0.09
#define PIN_NFC2           (10) // P1.10

// On-board QSPI Flash
// If EXTERNAL_FLASH_DEVICES is not defined, all supported devices will be used
#define EXTERNAL_FLASH_DEVICES   MX25R6435F

/*
 * Reset Button at P0.18
 */
#define RESET_PIN            18

#ifdef __cplusplus
}
#endif

// MyBoardNRF52840 library must be included in PIO libs dir
#include <MyBoardNRF52840.h>

#endif
