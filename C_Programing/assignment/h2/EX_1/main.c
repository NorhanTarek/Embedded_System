/*
 * main.c
 *
 *  Created on: Aug 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"

void main ()
{
	int x;
	printf ("Enter an integer you want to check: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d", &x);

/*
 divide the number by two and then find remainder
 if it is equal to '0' the the number is even
 if it is equal to '1' the the number is odd
 */
	if (x%2)
	{
		printf ("%d is odd ", x);
	}

	else if (! (x%2))
	{

		printf ("%d is even", x);
	}
}
