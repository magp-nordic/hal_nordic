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

#ifndef NRFX_BSP_H__
#define NRFX_BSP_H__

#ifndef NRFX_BSP_NRF_PATH
#define NRFX_BSP_NRF_PATH "stable/mdk/nrf.h"
#endif

#ifndef NRFX_BSP_ERRATAS_PATH
#define NRFX_BSP_ERRATAS_PATH "stable/mdk/nrf_erratas.h"
#endif

#ifndef NRFX_BSP_SOC_IRQS_PATH
#define NRFX_BSP_SOC_IRQS_PATH "stable/soc/nrfx_irqs.h"
#endif

#ifndef NRFX_BSP_NRFX_EXT_PATH
#define NRFX_BSP_NRFX_EXT_PATH "stable/nrfx_ext.h"
#endif

#ifndef NRFX_BSP_NRFX_COREDEP_PATH
#define NRFX_BSP_NRFX_COREDEP_PATH "stable/soc/nrfx_coredep_defs.h"
#endif

#include NRFX_BSP_NRF_PATH
#include NRFX_BSP_ERRATAS_PATH
#include NRFX_BSP_NRFX_EXT_PATH

#endif
