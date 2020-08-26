/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */


#include "stdio.h"
void main ()
{
	int n, fac = 1;
	int x;
	printf ("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	if (n > 0)
	{
		for(x = 1 ; x <= n ; x++)
		{
			fac *= x;
		}
		printf ("factorial = %d \r\n", fac);
	}

	else if (n < 0)
	{

		printf ("Error!!! factorial of negative number doesn't exist");
	}

	else
		printf (" factorial doesn't exist and the factorial of 0 is 1");

}


