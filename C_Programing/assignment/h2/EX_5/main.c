/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */

#include "stdio.h"
void main()
{
	char c;
	int x;
	printf ("Enter a character: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%c", &c);

	x = (int)c;

	if ( (x <= 90 && x>= 65) || (x <= 122 && x>= 97))

	{
		printf (" %c is an alphabet: ", c);

	}
	else

	{
		printf (" %c is not an alphabet: ", c);

	}

}
