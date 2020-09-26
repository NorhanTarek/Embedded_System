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
struct SStudent S;
printf("Enter Name: ");
fflush (stdin);
fflush (stdout);
scanf ("%s",&S.M_Name);

printf("Enter Roll Number: ");
fflush (stdin);
fflush (stdout);
scanf ("%d",&S.M_Roll);

printf("Enter Marks: ");
fflush (stdin);
fflush (stdout);
scanf ("%d",&S.M_Marks);

printf("Name: %s \n", S.M_Name);
printf("Roll: %d \n", S.M_Roll);
printf("Marks: %d \n", S.M_Marks);
}
