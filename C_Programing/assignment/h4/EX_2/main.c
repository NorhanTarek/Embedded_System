/*
 * main.c
 *
 *  Created on: Sep 12, 2020
 *      Author: Norhan
 */

#include"stdio.h"

int factorial_No (int x);

int main ()
{
	int a;
	printf("Enter an positive integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &a);


	printf("factorial of %d = : %d", a, factorial_No (a));
	return 0;

}
int factorial_No (int x)
{
	static int f = 1;
	f *= x--;

	if (x > 1)
		factorial_No (x);

	return f;
}

