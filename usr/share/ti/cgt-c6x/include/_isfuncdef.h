/****************************************************************************/
/*  _ISFUNCDEF.H v8.0.0B4                                                   */
/*                                                                          */
/* Copyright (c) 2005-2014 Texas Instruments Incorporated                   */
/* http://www.ti.com/                                                       */
/*                                                                          */
/*  Redistribution and  use in source  and binary forms, with  or without   */
/*  modification,  are permitted provided  that the  following conditions   */
/*  are met:                                                                */
/*                                                                          */
/*     Redistributions  of source  code must  retain the  above copyright   */
/*     notice, this list of conditions and the following disclaimer.        */
/*                                                                          */
/*     Redistributions in binary form  must reproduce the above copyright   */
/*     notice, this  list of conditions  and the following  disclaimer in   */
/*     the  documentation  and/or   other  materials  provided  with  the   */
/*     distribution.                                                        */
/*                                                                          */
/*     Neither the  name of Texas Instruments Incorporated  nor the names   */
/*     of its  contributors may  be used to  endorse or  promote products   */
/*     derived  from   this  software  without   specific  prior  written   */
/*     permission.                                                          */
/*                                                                          */
/*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS   */
/*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT   */
/*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR   */
/*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT   */
/*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,   */
/*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT   */
/*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,   */
/*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY   */
/*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT   */
/*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE   */
/*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    */
/*                                                                          */
/****************************************************************************/
static __inline int isalnum(int _c)  { return(_isalnum(_c)); }
static __inline int isalpha(int _c)  { return(_isalpha(_c)); }
static __inline int isascii(int _c)  { return(_isascii(_c)); }
static __inline int iscntrl(int _c)  { return(_iscntrl(_c)); }
static __inline int isdigit(int _c)  { return(_isdigit(_c)); }
static __inline int isgraph(int _c)  { return(_isgraph(_c)); }
static __inline int islower(int _c)  { return(_islower(_c)); }
static __inline int isprint(int _c)  { return(_isprint(_c)); }
static __inline int ispunct(int _c)  { return(_ispunct(_c)); }
static __inline int isspace(int _c)  { return(_isspace(_c)); }
static __inline int isupper(int _c)  { return(_isupper(_c)); }
static __inline int isxdigit(int _c) { return(_isxdigit(_c));}
static __inline int toascii(int _c)  { return(_toascii(_c)); }
