/*
 * main.c
 *
 *  Created on: Sep 3, 2020
 *      Author: norha
 */



#include"stdio.h"
void main()
{
	int n, i;
		float sum = 0;
		float avg;
		float arr[20];

		printf("Enter the numbers of data: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &n);
		printf("\r\n");
		for (i=0; i<n; i++)
		{

			printf("%d.Enter numbers: ", i+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &arr[i]);

			sum += arr[i];

		}

		avg = sum /n;
		printf("Average = %f\r\n", avg);

}



