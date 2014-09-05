/*
 * cabs() wrapper for hypot().
 *
 * Written by J.T. Conklin, <jtc@wimsey.com>
 * Placed into the Public Domain, 1994.
 */

#include <complex.h>
#include <math.h>

double
cabs(double complex z)
{
	return hypot(creal(z), cimag(z));
}
