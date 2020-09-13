/*
 * main.c
 *
 *  Created on: Sep 12, 2020
 *      Author: norha
 */


#include"stdio.h"

void Primary_Number (int x, int y);

void main ()
{
	int a, b;
	printf("Enter two numbers (intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a, &b);

	printf("primary number between %d and %d are):");
	Primary_Number (a, b);
}
void Primary_Number (int x, int y)
{
	int i, j;

	for (i=x; i<=y; i++)
	{
		for (j=2; j<=i/2; j++)
		{

			if ((i%j == 0))

				break;
			else if (j == i/2)
				printf("%d ", i);
		}
		if(i/2 == 1)
			printf("%d ", i);
	}



}
