/*
 * Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries
 *
 * File:            definitions.h
 * Project:         dfll48m-initialization
 * Date:            June 30, 2018
 * Compiler:        arm-gcc v6.3.1
 * 
 * Project-wide constants
 *
 * Hardware Configuration: SAMD21 Xplained PRO (ATSAMD21J18A) 
 *
 */

/* Adapted for micromouse2020 */

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

// I/O Ports definitions
// #define PORTA     (0ul)
// #define PORTB     (1ul)

// // LED0 IO Pin definition
// #define LED0_PORT            PORTA
// #define LED0_PIN_NUMBER      (17ul)
// #define LED0_PIN_MASK        PORT_PA17

// // GCLK_MAIN Clock output IO Pin Definition
// #define GCLK_MAIN_OUTPUT_PORT       PORTA
// #define GCLK_MAIN_OUTPUT_PIN_NUMBER (28ul)
// #define GCLK_MAIN_OUTPUT_PIN_MASK   PORT_PA28

// Constants for Clock Generators
#define GENERIC_CLOCK_GENERATOR_MAIN      (0u)
#define GENERIC_CLOCK_GENERATOR_XOSC32K   (1u)
#define GENERIC_CLOCK_GENERATOR_OSCULP32K (2u) /* Initialized at reset for WDT */  // Not Used
#define GENERIC_CLOCK_GENERATOR_OSC8M     (3u)
// Constants for Clock multiplexers
#define GENERIC_CLOCK_MULTIPLEXER_DFLL48M (0u) // Not Used

// Constants for DFLL48M
#define MAIN_CLK_FREQ (48000000u)
#define EXT_32K_CLK_FREQ (32768u)

#endif /* DEFINITIONS_H_ */