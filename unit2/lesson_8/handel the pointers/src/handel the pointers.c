/*
 ============================================================================
 Name        : handel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ab;
	int m=29;
	printf("address of m : %x\n value of m : %d\n\n",&m,m);

	ab=&m;
	printf("address of ab : %x\n value of ab : %d\n\n",ab,*ab);

   *ab=34;
   printf("address of ab : %x\n value of ab : %d\n\n",ab,*ab);

   *ab=7;
   printf("address of m : %x\n value of m : %d\n\n",&m,m);
	return 0;
}
