/*
 * main.c
 *
 *  Created on: Aug 26, 2020
 *      Author: Norhan
 */


#include "stdio.h"

void main ()
{
	char c;
	int x;
	printf ("Enter an alphabet: ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%c", &c);

	/*
	 convert the character to the asci code the check
	 */

	x = (int)c;
	if ( (x <= 90 && x>= 65) || (x <= 122 && x>= 97))
	{
		if (x == 65 || x ==69 || x == 73 || x == 79 || x == 85 || x == 97 || x == 101 || x == 105 || x == 111 || x == 117 )
		{
			printf ("%c is a vowel \r\n", c);

		}
		else
		{
			printf ("%c is a consonant \r\n ", c);
		}
	}
}
