/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: norha
 */


#include "stdio.h"
int r;
#define Area(r) (2 * 3.14 * r)

void main ()
{
	float A;
	printf("Enter the radius");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &r);

	A = Area(r);
	printf("Area=%.2f", A);
}
