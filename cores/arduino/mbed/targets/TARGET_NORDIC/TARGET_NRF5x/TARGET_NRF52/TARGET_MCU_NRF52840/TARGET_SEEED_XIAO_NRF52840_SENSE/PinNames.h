/*
 * Copyright (c) 2019 Arduino SA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* MBED TARGET LIST: SEEED_XIAO_NRF52840_SENSE */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "nrf_gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

///> define macro producing for example Px_y = NRF_GPIO_PIN_MAP(x, y)
#define PinDef(port_num, pin_num) P##port_num##_##pin_num = NRF_GPIO_PIN_MAP(port_num, pin_num)


typedef enum {
    PinDef(0 , 0), // P0_0 = 0...
    PinDef(0 , 1),
    PinDef(0 , 2),
    PinDef(0 , 3),
    PinDef(0 , 4),
    PinDef(0 , 5),
    PinDef(0 , 6),
    PinDef(0 , 7),
    PinDef(0 , 8),
    PinDef(0 , 9),
    PinDef(0 , 10),
    PinDef(0 , 11),
    PinDef(0 , 12),
    PinDef(0 , 13),
    PinDef(0 , 14),
    PinDef(0 , 15),
    PinDef(0 , 16),
    PinDef(0 , 17),
    PinDef(0 , 18),
    PinDef(0 , 19),
    PinDef(0 , 20),
    PinDef(0 , 21),
    PinDef(0 , 22),
    PinDef(0 , 23),
    PinDef(0 , 24),
    PinDef(0 , 25),
    PinDef(0 , 26),
    PinDef(0 , 27),
    PinDef(0 , 28),
    PinDef(0 , 29),
    PinDef(0 , 30),
    PinDef(0 , 31),

    PinDef(1 , 0), //P1_1 = 32...
    PinDef(1 , 1),
    PinDef(1 , 2),
    PinDef(1 , 3),
    PinDef(1 , 4),
    PinDef(1 , 5),
    PinDef(1 , 6),
    PinDef(1 , 7),
    PinDef(1 , 8),
    PinDef(1 , 9),
    PinDef(1 , 10),
    PinDef(1 , 11),
    PinDef(1 , 12),
    PinDef(1 , 13),
    PinDef(1 , 14),
    PinDef(1 , 15),

    // Port0
    p0  = P0_0,
    p1  = P0_1,
    p2  = P0_2,
    p3  = P0_3,
    p4  = P0_4,
    p5  = P0_5,
    p6  = P0_6,
    p7  = P0_7,
    p8  = P0_8,
    p9  = P0_9,
    p10 = P0_10,
    p11 = P0_11,
    p12 = P0_12,
    p13 = P0_13,
    p14 = P0_14,
    p15 = P0_15,
    p16 = P0_16,
    p17 = P0_17,
    p18 = P0_18,
    p19 = P0_19,
    p20 = P0_20,
    p21 = P0_21,
    p22 = P0_22,
    p23 = P0_23,
    p24 = P0_24,
    p25 = P0_25,
    p26 = P0_26,
    p27 = P0_27,
    p28 = P0_28,
    p29 = P0_29,
    p30 = P0_30,
    p31 = P0_31,
    
    // Port1
    p32 = P1_0,
    p33 = P1_1,
    p34 = P1_2,
    p35 = P1_3,
    p36 = P1_4,
    p37 = P1_5,
    p38 = P1_6,
    p39 = P1_7,
    p40 = P1_8,
    p41 = P1_9,
    p42 = P1_10,
    p43 = P1_11,
    p44 = P1_12,
    p45 = P1_13,
    p46 = P1_14,
    p47 = P1_15,
 
    RX_PIN_NUMBER  = P1_12,
    TX_PIN_NUMBER  = P1_11,
    
    LED_BUILTIN = P0_26,
    
    LED_RED   = p26,
    LED_GREEN = p30,
    LED_BLUE  = p6,
    
    LED1 = LED_BUILTIN,
    LED2 = LED_RED,
    LED3 = LED_GREEN,
    LED4 = LED_BLUE,
    
    // mBed interface Pins
    CONSOLE_TX = TX_PIN_NUMBER,
    CONSOLE_RX = RX_PIN_NUMBER,
#if defined(MBED_CONF_TARGET_STDIO_UART_TX)
    STDIO_UART_TX   = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    STDIO_UART_TX   = CONSOLE_TX,
#endif
#if defined(MBED_CONF_TARGET_STDIO_UART_RX)
    STDIO_UART_RX   = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    STDIO_UART_RX   = CONSOLE_RX,
#endif

    SPI_PSELMOSI0 = P1_15,
    SPI_PSELMISO0 = P1_14,
    SPI_PSELSS0   = P0_3,
    SPI_PSELSCK0  = P1_13,

    SPIS_PSELMOSI = P1_15,
    SPIS_PSELMISO = P1_14,
    SPIS_PSELSS   = P0_3,
    SPIS_PSELSCK  = P1_13,

    I2C_SDA0 = p4,
    I2C_SCL0 = p5,

    /**** QSPI pins ****/
    QSPI1_IO0 = P0_20,
    QSPI1_IO1 = P0_24,
    QSPI1_IO2 = P0_22,
    QSPI1_IO3 = P0_23,
    QSPI1_SCK = P0_21,
    QSPI1_CSN = P0_25,

    QSPI_FLASH1_IO0 = P0_20,
    QSPI_FLASH1_IO1 = P0_24,
    QSPI_FLASH1_IO2 = P0_22,
    QSPI_FLASH1_IO3 = P0_23,
    QSPI_FLASH1_SCK = P0_21,
    QSPI_FLASH1_CSN = P0_25,

#ifndef ARDUINO_ARCH_MBED
    // Digital Pins
    D0  = P0_2,
    D1  = P0_3,
    D2  = P0_28,
    D3  = P0_29,
    D4  = P0_4,
    D5  = P0_5,
    D6  = P1_11,
    D7  = P1_12,
    D8  = P1_13,
    D9  = P1_14,
    D10 = P1_15,
  
    // Analog Pins
    A0 = p2,
    A1 = p3,
    A2 = p28,
    A3 = p29,
    A4 = p4,
    A5 = p5,
#endif

    AIN0 = p2,
    AIN1 = p3,
    AIN2 = p28,
    AIN3 = p29,
    AIN4 = p4,
    AIN5 = p5,
    
    I2C_SDA1 = p7,
    I2C_SCL1 = p27,
   
    MIC_PWR = p42, 
    PDM_CLK = p32,
    PDM_DIN = p16,

    // Not connected
    NC = (int)0xFFFFFFFF,

    STDIO_UART_RTS = NC,
    STDIO_UART_CTS = NC,

} PinName;

typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp = 3,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
