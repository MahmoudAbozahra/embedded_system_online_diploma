/*
 ============================================================================
 Name        : Ex-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int x;
	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even number.",x);
	else
		printf("%d is odd number.",x);
	return 0;
}
