/*
 * main.c
 *
 *  Created on: Aug 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"

void main ()
{
	float x, y, z;
	printf ("Enter value of a : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f", &x);
	printf ("Enter value of b : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f", &y);

	z = x;
	x = y;
	y = z;


	printf("After swapping, value of a = %f \r\n", x);
	printf("After swapping, value of b = %f \r\n", y);



}


