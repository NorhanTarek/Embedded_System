/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */

#include "stdio.h"
void main ()
{
	int n, sum = 0;
    int x;
	printf ("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	for(x = 0 ; x <= n ; x++)
	{
		sum += x;
	}
	printf ("sum = %d \r\n", sum);
}

