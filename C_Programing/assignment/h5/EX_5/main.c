/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: norha
 */


#include "stdio.h"
#define pi 3.14
#define Area(r) (pi * r * r)

int main ()
{
	int r;
	float A;

	printf("Enter the radius");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &r);

	A = Area(r);
	printf("Area=%.2f", A);
	return 0;
}
