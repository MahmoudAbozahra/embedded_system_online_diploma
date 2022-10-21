/*
 ============================================================================
 Name        : Ex_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int number;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("You entered:%d",number);
	return 0;
}
