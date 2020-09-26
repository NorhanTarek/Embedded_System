
/*
 * main.c
 *
 *  Created on: Sep 26, 2020
 *      Author: Norhan
 */

#include "stdio.h"
struct SStudent
{
	int M_Feet;
	float M_Inch;
};
void main ()
{
	struct SStudent x, y, z;

	printf("Enter Information for first distance: \n");
	printf("Enter Feet: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",&x.M_Feet);

	printf("Enter Inche: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f",&x.M_Inch);

	printf("Enter Information for Second distance: \n");
	printf("Enter Feet: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",&y.M_Feet);

	printf("Enter Inche: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%f",&y.M_Inch);

z.M_Inch = x.M_Inch + y.M_Inch;
z.M_Feet = x.M_Feet + y.M_Feet;
if (z.M_Inch >= 12.00)
{
	z.M_Inch = z.M_Inch - 12;
	z.M_Feet++;
}

		printf("Sum of distace = %d '-%.1f"" \n", z.M_Feet, z.M_Inch);

}
