/*
 ============================================================================
 Name        : Ex_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	char a;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %d: ",a);
	return 0;
}
