/*****************************************************************************/
/*  complex_ld.h v8.0.0B4                                                    */
/*                                                                           */
/* Copyright (c) 2014-2014 Texas Instruments Incorporated                    */
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

/*****************************************************************************/
/* LONG DOUBLE COMPLEX OPERATIONS - CALL THRUS                               */
/*   This header is included by complex_ld.c for non-inline definitions of   */
/*   these calls.  This header is also included by complex.h for the inline  */
/*   versions of these calls.                                                */
/*****************************************************************************/


#if defined(_COMPLEX_LD_DEFINE)
/*****************************************************************************/
/* NON-INLINED DEFINITIONS                                                   */
/*   _COMPLEX_LD_DEFINE is defined by complex_ld.c to access these           */
/*   definitions.  The macro is required to disambiguate between producing a */
/*   declaration and definition when _INLINE is undef'ed.                    */
/*****************************************************************************/
#  define _LDBL_CPLX_CALL_CPLX1(x,y) \
      long double complex (x)(long double complex a) {return (y)(a);}
#  define _LDBL_CPLX_CALL_CPLX2(x,y) \
      long double complex (x)(long double complex a, long double complex b) \
                             {return (y)(a, b);}
#  define _LDBL_CALL_CPLX1(x,y) \
      long double (x)(long double complex a) {return (y)(a);}

#elif defined(_INLINE)
/*****************************************************************************/
/* INLINED DEFINITIONS                                                       */
/*****************************************************************************/
#  define _LDBL_CPLX_CALL_CPLX1(x,y) \
      _IDEFN long double complex (x)(long double complex a) {return (y)(a);}
#  define _LDBL_CPLX_CALL_CPLX2(x,y) \
      _IDEFN long double complex (x)(long double complex a, \
                                     long double complex b) {return (y)(a, b);}
#  define _LDBL_CALL_CPLX1(x,y) \
      _IDEFN long double (x)(long double complex a) {return (y)(a);}

#else
/*****************************************************************************/
/* NON-INLINED DECLARATIONS                                                  */
/*****************************************************************************/
#  define _LDBL_CPLX_CALL_CPLX1(x,y) \
      _CODE_ACCESS long double complex (x)(long double complex a);
#  define _LDBL_CPLX_CALL_CPLX2(x,y) \
      _CODE_ACCESS long double complex (x)(long double complex a, \
                                     long double complex b);
#  define _LDBL_CALL_CPLX1(x,y) \
      _CODE_ACCESS long double (x)(long double complex a);
#endif


_LDBL_CPLX_CALL_CPLX1(cacoshl    ,cacosh)
_LDBL_CPLX_CALL_CPLX1(cacosl     ,cacos)
_LDBL_CPLX_CALL_CPLX1(casinhl    ,casinh)
_LDBL_CPLX_CALL_CPLX1(casinl     ,casin)
_LDBL_CPLX_CALL_CPLX1(catanhl    ,catanh)
_LDBL_CPLX_CALL_CPLX1(catanl     ,catan)
_LDBL_CPLX_CALL_CPLX1(ccoshl     ,ccosh)
_LDBL_CPLX_CALL_CPLX1(ccosl      ,ccos)
_LDBL_CPLX_CALL_CPLX1(cexpl      ,cexp)
_LDBL_CPLX_CALL_CPLX1(clogl      ,clog)
_LDBL_CPLX_CALL_CPLX2(cpowl      ,cpow)
_LDBL_CPLX_CALL_CPLX1(csinhl     ,csinh)
_LDBL_CPLX_CALL_CPLX1(csinl      ,csin)
_LDBL_CPLX_CALL_CPLX1(ctanhl     ,ctanh)
_LDBL_CPLX_CALL_CPLX1(ctanl      ,ctan)
_LDBL_CPLX_CALL_CPLX1(cprojl     ,cproj)
_LDBL_CPLX_CALL_CPLX1(csqrtl     ,csqrt)
_LDBL_CALL_CPLX1     (cabsl      ,cabs)
_LDBL_CALL_CPLX1     (cargl      ,carg)
_LDBL_CALL_CPLX1     (cimagl     ,cimag)


/*****************************************************************************/
/* Undefine to allow for multiple inclusion as declarations and definitions. */
/*****************************************************************************/
#undef _LDBL_CPLX_CALL_CPLX1
#undef _LDBL_CPLX_CALL_CPLX2
#undef _LDBL_CALL_CPLX1
