/*
 * main.c
 *
 *  Created on: Sep 2, 2020
 *      Author: norhan
 */


#include "stdio.h"
int main ()
{
	float a [2][2];
	float b [2][2];
	int r, c;
	printf("Enter the elemnts of 1st matrix \r\n");
	for (r = 0; r<2; r++)
	{
		for (c = 0; c<2; c++)
		{
			printf("Enter a%d%d: ",r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &a[r][c]);
		}
	}

	printf("Enter the elemnts of 1st matrix \r\n");
	for (r = 0; r<2; r++)
	{
		for (c = 0; c<2; c++)
		{
			printf("Enter b %d%d: ",r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &b[r][c]);
		}
	}

	printf("Sum Of Matrix \r\n");
	for (r = 0; r<2; r++)
	{
		for (c = 0; c<2; c++)
		{
			printf("%f \t", a[r][c] + b[r][c]);
		}
		printf("\r\n");
	}

	return 0;
}
