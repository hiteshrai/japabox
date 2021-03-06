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
 * Generated by erpcgen 1.7.0 on Thu Apr  5 09:26:03 2018.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_matrix_multiply_h_)
#define _erpc_matrix_multiply_h_

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
/*! This is the matrix array type. The dimension has to be the same as the
    matrix size const. Do not forget to re-generate the erpc code once the
    matrix size is changed in the erpc file */
typedef int32_t Matrix[5][5];

// Constant variable declarations
/*! This const defines the matrix size. The value has to be the same as the
    Matrix array dimension. Do not forget to re-generate the erpc code once the
    matrix size is changed in the erpc file */
extern const int32_t matrix_size;

#endif // ERPC_TYPE_DEFINITIONS

/*! @brief MatrixMultiplyService identifiers */
enum _MatrixMultiplyService_ids
{
    kMatrixMultiplyService_service_id = 1,
    kMatrixMultiplyService_erpcMatrixMultiply_id = 1,
};

#if defined(__cplusplus)
extern "C" {
#endif

//! @name MatrixMultiplyService
//@{
void erpcMatrixMultiply(Matrix matrix1, Matrix matrix2, Matrix result_matrix);
//@} 

#if defined(__cplusplus)
}
#endif

#endif // _erpc_matrix_multiply_h_
