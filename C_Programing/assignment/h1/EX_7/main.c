/*
 * main.c
 *
 *  Created on: Aug 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"

void main ()
{
	float x, y;
	printf ("Enter value of x : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f", &x);
	printf ("Enter value of y : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f", &y);

	/* suppose that :  x = 2.1, y = 3.5*/

	x = x + y;  /* x = 5.6, y = 3.5*/
	y = x - y;  /* x = 5.6, y = 2.1*/
	x = x - y;  /* x = 3.5, y = 2.1*/


	printf("After swapping, value of x = %f \r\n", x);
	printf("After swapping, value of y = %f \r\n", y);



}
