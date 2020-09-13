/*
 * main.c
 *
 *  Created on: Sep 12, 2020
 *      Author: norha
 */


#include "stdio.h"

int Power_Fun(int x, int y);
int main ()
{
	int b, po;
	printf ("Enter base number: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",&b);
	printf ("Enter power number (postive integer): ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",&po);
	printf ("%d", Power_Fun(b, po));

	return 0;
}
int Power_Fun(int x, int y)
{
	static int f = 1 ;


	f *= x;
	y--;

	if (y >= 1)
		Power_Fun(x, y);

return f;
}

