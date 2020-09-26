/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"
struct SStudent
{
	char M_Name [20];
	int M_Roll;
	int M_Marks;
};
void main ()
{
	int i;
	struct SStudent S[10];
	for (i=0; i<10; i++)
	{
		printf("For Roll Number: %d \n ",i+1);
		S[i].M_Roll = i+1;
		printf("Enter Name: ");
		fflush (stdin);
		fflush (stdout);
		scanf ("%s",&S[i].M_Name);

		printf("Enter Marks: ");
		fflush (stdin);
		fflush (stdout);
		scanf ("%d",&S[i].M_Marks);
	}
	for (i=0; i<10; i++)
	{
		printf("Iformation for Roll number: %d \n", S[i].M_Roll);
		printf("Name: %s \n", S[i].M_Name);
		printf("Marks: %d \n", S[i].M_Marks);
	}
}
