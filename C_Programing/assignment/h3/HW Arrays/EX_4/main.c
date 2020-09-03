/*
 * main.c
 *
 *  Created on: Sep 3, 2020
 *      Author: norha
 */


#include"stdio.h"
void main ()
{


	int n, i, value, location;

	int arr[20];

	printf("Enter no of elemnts: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{

		scanf("%d", &arr[i]);


	}
	printf("Enter the elemnt to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &value);
	printf ("\r\n");

	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &location);

	printf ("\r\n");

	for (i=n; i>(location-1); i--)
	{

		arr[i] = arr[i-1];

	}
	arr[location-1] = value;

	for (i=0; i<=n; i++)
	{

		printf("%d ", arr[i]);

	}
}
