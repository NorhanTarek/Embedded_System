/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */


#include "stdio.h"


void main()

{
	float a, b, c;
	printf("Enter Three Numbers: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f %f %f", &a, &b, &c);

	/*
	 compare a with b then store the largest number in a
     then compare the result with c
	 */
	a = (a>=b) ? a : b;
	a = (a>=c) ? a : c;
	printf("Largest number = %f", a);



}
