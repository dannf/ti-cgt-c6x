/*-
 * Copyright (c) 2001-2011 The FreeBSD Project.
 * All rights reserved.
 *
 * Copyright (c) 2014-2014 Texas Instruments Incorporated
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: release/10.0.0/include/complex.h 251121 2013-05-30 04:49:26Z das $
 */

#ifndef _COMPLEX_H
#define	_COMPLEX_H

#ifdef __cplusplus
#  error "C99 complex in C++ mode is not supported."
#endif

#include <linkage.h>

#define _Complex_I   ((float _Complex)  __I__)
#define _Imaginary_I ((float _Imaginary)__I__)

#define imaginary _Imaginary
#define	complex   _Complex
#define	I         _Imaginary_I

_CODE_ACCESS double         cabs   (double complex);
_CODE_ACCESS float          cabsf  (float  complex);
_CODE_ACCESS double complex cacos  (double complex);
_CODE_ACCESS float  complex cacosf (float  complex);
_CODE_ACCESS double complex cacosh (double complex);
_CODE_ACCESS float  complex cacoshf(float  complex);
_CODE_ACCESS double         carg   (double complex);
_CODE_ACCESS float          cargf  (float  complex);
_CODE_ACCESS double complex casin  (double complex);
_CODE_ACCESS float  complex casinf (float  complex);
_CODE_ACCESS double complex casinh (double complex);
_CODE_ACCESS float  complex casinhf(float  complex);
_CODE_ACCESS double complex catan  (double complex);
_CODE_ACCESS float  complex catanf (float  complex);
_CODE_ACCESS double complex catanh (double complex);
_CODE_ACCESS float  complex catanhf(float  complex);
_CODE_ACCESS double complex ccos   (double complex);
_CODE_ACCESS float  complex ccosf  (float  complex);
_CODE_ACCESS double complex ccosh  (double complex);
_CODE_ACCESS float  complex ccoshf (float  complex);
_CODE_ACCESS double complex cexp   (double complex);
_CODE_ACCESS float  complex cexpf  (float  complex);
_CODE_ACCESS double         cimag  (double complex);
_CODE_ACCESS float          cimagf (float  complex);
_IDECL       double complex conj   (double complex);
_IDECL       float  complex conjf  (float  complex);
_IDECL       long double complex conjl(long double  complex);
_CODE_ACCESS double complex cproj  (double complex);
_CODE_ACCESS float  complex cprojf (float  complex);
_IDECL       double         creal  (double complex);
_IDECL       float          crealf (float  complex);
_IDECL       long double    creall (long double complex);
_CODE_ACCESS double complex csin   (double complex);
_CODE_ACCESS float  complex csinf  (float  complex);
_CODE_ACCESS double complex csinh  (double complex);
_CODE_ACCESS float  complex csinhf (float  complex);
_CODE_ACCESS double complex csqrt  (double complex);
_CODE_ACCESS float  complex csqrtf (float  complex);
_CODE_ACCESS double complex ctan   (double complex);
_CODE_ACCESS float  complex ctanf  (float  complex);
_CODE_ACCESS double complex ctanh  (double complex);
_CODE_ACCESS float  complex ctanhf (float  complex);

/*****************************************************************************/
/* MISSING COMPLEX OPERATIONS                                                */
/*   As of version 10.0, FreeBSD is not strictly C99 compliant.  Missing     */
/*   operations in the original source include clog, clog10, and cpow.  In   */
/*   addition, there are a number of missing long double versions of         */
/*   operations.  These are handled by call through functions to the double  */
/*   versions on platforms where double == long double.                      */
/*****************************************************************************/
_CODE_ACCESS double      complex clog   (double complex);
_CODE_ACCESS float       complex clogf  (float  complex);
_IDECL       double      complex clog10 (double complex);
_IDECL       float       complex clog10f(float  complex);
_IDECL       long double complex clog10l(long double complex);
_CODE_ACCESS double      complex cpow   (double complex, double complex);
_CODE_ACCESS float       complex cpowf  (float  complex, float  complex);


/*****************************************************************************/
/* INLINE COMPLEX OPERATIONS -- Call Thrus                                   */
/*   These are declarations when _INLINE is not defined and inline           */
/*   definitions when it is.                                                 */
/*****************************************************************************/
#include <complex_ld.h>


/*****************************************************************************/
/* INLINE COMPLEX OPERATIONS -- Non-call Thrus                               */
/*****************************************************************************/
#ifdef _INLINE
_IDEFN double creal(double complex z)
{
    return z;
}

_IDEFN float crealf(float complex z)
{
    return z;
}

_IDEFN long double creall(long double complex z)
{
    return z;
}

_IDEFN double complex clog10(double complex z)
{
    return clog(z) / clog(10.0);
}

_IDEFN float complex clog10f(float complex z)
{
    return clogf(z) / clogf(10.0f);
}

_IDEFN long double complex clog10l(long double complex z)
{
    return clog(z) / clog(10.0);
}

_IDEFN double complex conj(double complex z)
{
    return creal(z) - I * cimag(z);
}

_IDEFN float complex conjf(float complex z)
{
    return crealf(z) - I * cimagf(z);
}

_IDEFN long double complex conjl(long double complex z)
{
    return creal(z) - I * cimag(z);
}
#endif

#endif /* _COMPLEX_H */
