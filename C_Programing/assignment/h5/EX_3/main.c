
/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"
struct SComplex
{
	float M_Real;
	float M_Imag;
};
struct SComplex Adding (struct SComplex a, struct SComplex b);
void main ()
{
	struct SComplex x, y, z;

	printf("for first complex number \nEnter real and imagiary respectively: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f %f",&x.M_Real, &x.M_Imag);

	printf("for first complex number \nEnter real and imagiary respectively: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f %f",&y.M_Real, &y.M_Imag);

	z = Adding (x, y);

	printf("Sum= %.1f+%.1fi \n", z.M_Real, z.M_Imag);

}
struct SComplex Adding (struct SComplex a, struct SComplex b)
{
	struct SComplex c;
	c.M_Real = a.M_Real + b.M_Real;
	c.M_Imag = a.M_Imag + b.M_Imag;
	return c;
}
