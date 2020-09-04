/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: norha
 */


#include "stdio.h"

void main ()
{
	char str [100];
	int i, n = 0;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);


	for (i=0; str[i]!= 0; i++)
	{
		n++;
	}
	printf("\r\nlength of string  %d", n );

}
