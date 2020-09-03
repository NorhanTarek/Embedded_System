/*
 * main.c
 *
 *  Created on: Sep 3, 2020
 *      Author: norha
 */


#include"stdio.h"
void main ()
{


	int n, i, value;

	int arr[20];

	printf("Enter no of elemnts: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{

		scanf("%d", &arr[i]);


	}
	printf("Enter the elemnt to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &value);
	printf ("\r\n");

	for (i=0; i<n; i++)
	{

		if (arr[i] == value)
		{
			printf("Number found at the location = %d", i+1);

		}

	}

}
