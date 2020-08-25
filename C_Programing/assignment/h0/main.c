/*
 * main.c
 *
 *  Created on: Aug 25, 2020
 *      Author: Norhan
 */


#include <stdio.h>

void main ()
{

	int x, y;    //Declaration of x and y variables
	/*
 nested loop
 Inner loop responsible for the printed number
 The first number of any raw depending on the outer loop
 The output :
 0123456789
 123456789
 23456789
 3456789
 456789
 56789
 6789
 789
 89
 9
	 */
	for (x=0; x<=9; x++)
	{
		for (y=x; y<=9; y++)
		{

			printf ("%d", y);

		}

		printf ("\r\n"); // print new line
	}


}
