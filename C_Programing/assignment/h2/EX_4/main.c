/*
 * main.c
 *
 *  Created on: Aug 27, 2020
 *      Author: Norhan
 */

#include "stdio.h"

void main ()
{
	int Number;
	printf("Enter a number: ");
	fflush (stdin);
	fflush (stdout);
	scanf("%d", &Number);

	if (Number > 0)
		printf("%d is positive ", Number);

	else if (Number < 0)
		printf("%d is negative ", Number);

	else
		printf("you entered zero.");



}
