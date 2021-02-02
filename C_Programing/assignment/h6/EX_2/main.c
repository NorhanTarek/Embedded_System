/*
 * main.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Norhan
 */


#include "stdio.h"
int n = 65, i;
int* p = &n;
int main ()

{
for (i=0; i<26; i++)
	printf("%c  ", *p + i);

return 0;
}
