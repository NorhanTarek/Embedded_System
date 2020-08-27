/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */

#include "stdio.h"
void main ()
{
	int x, y;
	char c;
	printf ("Enter operater either + or - or * or divide: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);

	printf ("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &x, &y);

	switch (c)
	{
	case '+' :

		printf ("%d + %d = %d", x, y, x+y);

		break;
	case '-' :

		printf ("%d - %d = %d", x, y, x-y);

		break;

	case '*' :

		printf ("%d * %d = %d", x, y, x*y);

		break;

	case '/' :

		printf ("%d / %d = %d", x, y, x/y);

		break;

	default :

		printf ("you entered wrong operator");

		break;

	}

}




