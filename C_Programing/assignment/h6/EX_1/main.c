/*
 * main.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Norhan
 */
#include "stdio.h"
int m = 29;
int* ab;
int main ()

{
printf("Address of m : %p \n", &m);
printf("Value of m : %d \n\n", m);

ab = &m;
printf("now ab is assigned with the address of m \n");
printf("Address of pointer ab : %p \n", ab);
printf("Content of pointer ab : %d \n\n", *ab);

m = 34;
printf("The value of m is assigned to %d now \n", m);
printf("Address of pointer ab : %p \n", ab);
printf("Content of pointer ab : %d \n\n", *ab);

*ab = 7;
printf("The pointer variable ab is assigned with the value of %d now \n", *ab);
printf("Address of m : %p \n", &m);
printf("Value of m : %d \n\n", m);
return 0;
}
