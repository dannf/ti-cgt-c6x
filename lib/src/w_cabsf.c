/*
 * cabsf() wrapper for hypotf().
 *
 * Written by J.T. Conklin, <jtc@wimsey.com>
 * Placed into the Public Domain, 1994.
 */

#include <complex.h>
#include <math.h>

float
cabsf(z)
	float complex z;
{
	return hypotf(crealf(z), cimagf(z));
}
