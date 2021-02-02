/*
 * main.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Norhan
 */
#include "stdio.h"
char str[50];
char* p = str;
int x = 0;
int main ()
{
	printf ("Pointer : Print a string in reverse order : \n");
	printf ("Input a string : ");
	fflush(stdin);
	fflush(stdout);
	scanf ("%s", str);

	while (*p)
	{
		p++;
		x++;
	}

	printf ("Reverse of the string is : ");
	while (x>=0)
	{
		p--;
		x--;
		printf ("%c", *p);
	}

	return 0;
}
