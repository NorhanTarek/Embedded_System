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
	char c;
	int i, n = 0;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	printf("\r\nEnter a character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);

	for (i=0; i<strlen(str); i++)
	{
		if (str[i] == c)
			n++;
		else
			continue;

	}
	printf("\r\nfrequency of %c = %d", c, n );

}
