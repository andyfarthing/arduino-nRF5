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

#ifndef _VARIANT_PCA10056_
#define _VARIANT_PCA10056_

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

// Number of pins defined in PinDescription array
#define PINS_COUNT           (48)
#define NUM_DIGITAL_PINS     (48)
#define NUM_ANALOG_INPUTS    (6)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (13) // P1.13
#define PIN_LED2             (14) // P1.14
#define PIN_LED3             (15) // P1.15
#define PIN_LED4             (16) // P1.16

#define LED_BUILTIN          PIN_LED1

// Buttons
#define PIN_BUTTON1         (11) // P1.11
#define PIN_BUTTON2         (12) // P1.12
#define PIN_BUTTON3         (24) // P0.24
#define PIN_BUTTON4         (25) // P0.25

/*
 * Analog pins
 */
#define PIN_A0               (3)  // P0.03
#define PIN_A1               (4)  // P0.04
#define PIN_A2               (28) // P0.28
#define PIN_A3               (29) // P0.29
#define PIN_A4               (30) // P0.30
#define PIN_A5               (31) // P0.31

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
#define ADC_RESOLUTION    14

// Other pins
#define PIN_NFC1           (9)  // P0.09
#define PIN_NFC2           (10) // P1.10

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (8) // P0.08
#define PIN_SERIAL_TX       (6) // P0.06

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (46) // P1.14
#define PIN_SPI_MOSI         (45) // P1.13
#define PIN_SPI_SCK          (47) // P1.15
#define PIN_SPI_SS           (44) // P1.12

static const uint8_t SS   = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (26) // P0.26
#define PIN_WIRE_SCL         (27) // P0.27

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

/*
 * QSPI interface for external flash
 */
#define PIN_QSPI_SCK         (19)
#define PIN_QSPI_CS          (17)
#define PIN_QSPI_DATA0       (20)
#define PIN_QSPI_DATA1       (21)
#define PIN_QSPI_DATA2       (22)
#define PIN_QSPI_DATA3       (23)

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

#endif
