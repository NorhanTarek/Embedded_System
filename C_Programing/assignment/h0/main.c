/*
 * main.c
 *
 *  Created on: Aug 25, 2020
 *      Author: Norhan
 */


#include <stdio.h>

void main ()
{

int x, y;

for (x=0; x<=9; x++)
{
	for (y=x; y<=9; y++)
	{

		printf ("%d", y);

	}

	printf ("\r\n");
}


}
