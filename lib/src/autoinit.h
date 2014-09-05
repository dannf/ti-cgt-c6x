/*****************************************************************************/
/* _AUTO_INIT()   v8.0.0B4 - Perform initialization of C variables.          */
/*                                                                           */
/* Copyright (c) 1993-2014 Texas Instruments Incorporated                    */
/* http://www.ti.com/                                                        */
/*                                                                           */
/*  Redistribution and  use in source  and binary forms, with  or without    */
/*  modification,  are permitted provided  that the  following conditions    */
/*  are met:                                                                 */
/*                                                                           */
/*     Redistributions  of source  code must  retain the  above copyright    */
/*     notice, this list of conditions and the following disclaimer.         */
/*                                                                           */
/*     Redistributions in binary form  must reproduce the above copyright    */
/*     notice, this  list of conditions  and the following  disclaimer in    */
/*     the  documentation  and/or   other  materials  provided  with  the    */
/*     distribution.                                                         */
/*                                                                           */
/*     Neither the  name of Texas Instruments Incorporated  nor the names    */
/*     of its  contributors may  be used to  endorse or  promote products    */
/*     derived  from   this  software  without   specific  prior  written    */
/*     permission.                                                           */
/*                                                                           */
/*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS    */
/*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT    */
/*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR    */
/*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT    */
/*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    */
/*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT    */
/*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,    */
/*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY    */
/*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT    */
/*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE    */
/*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.     */
/*                                                                           */
/*****************************************************************************/
#ifndef _TI_AUTO_INIT_H
#define _TI_AUTO_INIT_H

#include <linkage.h>
#include <cpy_tbl.h>

typedef void (*pinit_fn_t)(void);

#ifdef __TI_EABI__

/*****************************************************************************/
/* EABI declarations                                                         */
/*****************************************************************************/

    typedef void (*handler_fn_t)(char const *in, char *out);

extern __attribute__((weak)) _DATA_ACCESS
    handler_fn_t const __TI_Handler_Table_Base[];
extern __attribute__((weak)) _DATA_ACCESS
    handler_fn_t const __TI_Handler_Table_Limit[];

extern __attribute__((weak)) _DATA_ACCESS char *const __TI_CINIT_Base[];
extern __attribute__((weak)) _DATA_ACCESS char *const __TI_CINIT_Limit[];

    extern void  __TI_tls_init(void *TLS_block_addr);

    #define PINIT_BASE __TI_INITARRAY_Base
    #define PINIT_LIMIT __TI_INITARRAY_Limit

extern __attribute__((weak)) _DATA_ACCESS pinit_fn_t const PINIT_BASE[];
extern __attribute__((weak)) _DATA_ACCESS pinit_fn_t const PINIT_LIMIT[];

#else

/*****************************************************************************/
/* COFF/TI ABI declarations                                                  */
/*****************************************************************************/

extern _DATA_ACCESS char *const __cinit__[];
extern _DATA_ACCESS pinit_fn_t const __pinit__[];

#endif

/*****************************************************************************/
/* Common declarations                                                       */
/*****************************************************************************/

    #define HAS_BINIT 1
    extern _DATA_ACCESS COPY_TABLE const __binit__[];


    #ifdef __TI_EABI__
        #define AUTO_INIT _auto_init_elf
    #else
        #define AUTO_INIT _auto_init
    #endif

void AUTO_INIT(void);

#endif
