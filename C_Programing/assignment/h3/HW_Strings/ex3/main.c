/*
 * main.c
 *
 *  Created on: Sep 4, 2020
 *      Author: norha
 */

#include "stdio.h"

void main ()
{
	char str [100], n;
	int i;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);


	for (i=0; i <(strlen(str))/2; i++)
	{
		n = str[i];
		str[i] = str[strlen(str)-1-i];
		str[strlen(str)-1-i] = n;
	}

	printf("\r\nlength of string  %s", str );

}

