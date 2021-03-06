/*
 * The Clear BSD License
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted (subject to the limitations in the disclaimer below) provided
 * that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by erpcgen 1.7.0 on Thu Apr  5 09:26:04 2018.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_dac_adc_h_)
#define _erpc_dac_adc_h_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "erpc_version.h"

#if 10700 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif

#if !defined(ERPC_TYPE_DEFINITIONS)
#define ERPC_TYPE_DEFINITIONS

// Aliases data types declarations
typedef struct AdcConfig AdcConfig;
typedef struct Vector Vector;

// Structures/unions data types declarations
struct AdcConfig
{
    float vref;
    float atomicSteps;
};

struct Vector
{
    int16_t A_x;
    int16_t A_y;
    int16_t A_z;
    int16_t M_x;
    int16_t M_y;
    int16_t M_z;
};


// Constant variable declarations
extern const uint8_t StringMaxSize;

#endif // ERPC_TYPE_DEFINITIONS

/*! @brief dac_adc identifiers */
enum _dac_adc_ids
{
    kdac_adc_service_id = 1,
    kdac_adc_adc_get_config_id = 1,
    kdac_adc_convert_dac_adc_id = 2,
    kdac_adc_set_led_id = 3,
    kdac_adc_read_senzor_mag_accel_id = 4,
    kdac_adc_board_get_name_id = 5,
};

#if defined(__cplusplus)
extern "C" {
#endif

//! @name dac_adc
//@{
void adc_get_config(AdcConfig * config);

void convert_dac_adc(uint32_t numberToConvert, uint32_t * result);

void set_led(uint8_t whichLed);

void read_senzor_mag_accel(Vector * results);

void board_get_name(char * name);
//@} 

#if defined(__cplusplus)
}
#endif

#endif // _erpc_dac_adc_h_
