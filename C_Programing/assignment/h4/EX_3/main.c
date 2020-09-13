/*
 * main.c
 *
 *  Created on: Sep 12, 2020
 *      Author: norha
 */


#include "stdio.h"

void Reverse_Sentence (char s[], int n);
int main ()
{
	char sen [50];
	printf ("Enter a sentence: ");
	fflush (stdin);
	fflush (stdout);
	gets (sen);

	Reverse_Sentence (sen, strlen(sen));
	printf ("%s", sen);

	return 0;

}
void Reverse_Sentence (char s[], int n)
{
	static int i = 0 ;
	int x;

	x = s[i];
	s[i] = s[n - 1 - i];
	s[n - 1 - i] = x;
	i++;

	if (i< n/2)
		Reverse_Sentence (s, n);


}

