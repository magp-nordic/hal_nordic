/*
 * Copyright (c) 2025, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRFX_RAM_SECTIONS_H
#define NRFX_RAM_SECTIONS_H

#define RAM_NON_UNIFORM_SECTION_DECLARE(i, _block, _section) {.decoded = {_block, _section}}

#if defined(NRF51)
#define RAM_SECTION_UNIT_SIZE          8192
#define RAM_UNIFORM_BLOCKS             4
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 1
#define RAM_UNIFORM_SECTIONS_TOTAL     4
#error "Unsupported device."
#elif defined(NRF52805_XXAA) || defined(NRF52810_XXAA) || defined(NRF52811_XXAA)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             3
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     6
#elif defined(NRF52820_XXAA)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             4
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     8
#elif defined(NRF52832_XXAA)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             8
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     16
#elif defined(NRF52833_XXAA)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             8
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     16
#define RAM_NON_UNIFORM_BLOCK_INDEX    8
#define RAM_NON_UNIFORM_BLOCK_UNITS    8
#define RAM_NON_UNIFORM_SECTIONS                                                               \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 0), /* Section 0 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 1)  /* Section 1 of block 8 - 8 * 4 kB units. */
#elif defined(NRF52840_XXAA)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             8
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     16
#define RAM_NON_UNIFORM_BLOCK_INDEX    8
#define RAM_NON_UNIFORM_BLOCK_UNITS    8
#define RAM_NON_UNIFORM_SECTIONS                                                               \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 0), /* Section 0 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 1), /* Section 1 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 2), /* Section 2 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 3), /* Section 3 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 4), /* Section 4 of block 8 - 8 * 4 kB units. */ \
    NRFX_LISTIFY(RAM_NON_UNIFORM_BLOCK_UNITS,                                                  \
                 RAM_NON_UNIFORM_SECTION_DECLARE, (,),                                         \
                 RAM_NON_UNIFORM_BLOCK_INDEX, 5)  /* Section 5 of block 8 - 8 * 4 kB units. */
#elif defined(NRF5340_XXAA_APPLICATION)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             8
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 16
#define RAM_UNIFORM_SECTIONS_TOTAL     128
#elif defined(NRF5340_XXAA_NETWORK)
#define RAM_SECTION_UNIT_SIZE          4096
#define RAM_UNIFORM_BLOCKS             4
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 4
#define RAM_UNIFORM_SECTIONS_TOTAL     16
#elif defined(NRF54H20_XXAA) && defined(NRF_APPLICATION)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 1
#define RAM_UNIFORM_SECTIONS_TOTAL     1
#elif defined(NRF54H20_XXAA) && defined(NRF_RADIOCORE)
#define RAM_SECTION_UNIT_SIZE          (2UL * 16UL * 1024UL) /* Consider both banks as single unit */
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 6
#define RAM_UNIFORM_SECTIONS_TOTAL     6
#elif defined(NRF54L05_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 3
#define RAM_UNIFORM_SECTIONS_TOTAL     3
#elif defined(NRF54L10_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 6
#define RAM_UNIFORM_SECTIONS_TOTAL     6
#elif defined(NRF54L15_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 8
#define RAM_UNIFORM_SECTIONS_TOTAL     8
#elif defined(NRF54LM20A_ENGA_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 16
#define RAM_UNIFORM_SECTIONS_TOTAL     16
#elif defined(NRF54LS05B_ENGA_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 2
#define RAM_UNIFORM_SECTIONS_TOTAL     2
#elif defined(NRF54LV10A_ENGA_XXAA)
#define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
#define RAM_UNIFORM_BLOCKS             1
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 6
#define RAM_UNIFORM_SECTIONS_TOTAL     6
#elif defined(NRF9120_XXAA) || defined(NRF9160_XXAA)
#define RAM_SECTION_UNIT_SIZE          8192
#define RAM_UNIFORM_BLOCKS             8
#define RAM_UNIFORM_SECTIONS_PER_BLOCK 4
#define RAM_UNIFORM_SECTIONS_TOTAL     32
#elif !defined(RAM_SECTION_UNIT_SIZE)
#error "Unsupported device."
#endif

#endif
