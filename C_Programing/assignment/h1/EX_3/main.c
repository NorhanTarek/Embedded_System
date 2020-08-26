/*
 * main.c
 *
 *  Created on: Aug 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"

void main ()
{
	int x, y;
	printf ("Enter two integers: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d %d", &x, &y);
	printf("Sum: %d", x+y);



}
