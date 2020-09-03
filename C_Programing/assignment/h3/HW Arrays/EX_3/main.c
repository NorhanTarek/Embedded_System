/*
 * main.c
 *
 *  Created on: Sep 3, 2020
 *      Author: norha
 */


#include"stdio.h"
void main()
{
	int r, c, i,j;

	int arr1[20][20], arr2[20][20];

	printf("Enter rows and columns of matrix: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &r, &c);
	printf("\r\n");
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++){
			printf("Enter elemnts a%d%d: ", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &arr1[i][j]);


		}
	}

	printf("Entered matrix: \r\n");
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++){

			printf("%d\t",arr1[i][j]);

		}
		printf("\r\n");
	}
	for (i=0; i<c; i++)
	{
		for (j=0; j<r; j++){
			arr2 [i][j] = arr1 [j][i];

		}
	}

	printf("Transpose of matrix: \r\n");
	for (i=0; i<c; i++)
	{
		for (j=0; j<r; j++){

			printf("%d",arr2[i][j]);

		}
		printf("\r\n");
	}


}

