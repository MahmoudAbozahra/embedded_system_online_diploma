/*
 ============================================================================
 Name        : Ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	float num;
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>0)
		printf("%f is a positive.",num);
	else if(num==0)
		printf("you entered zero");
	else
		printf("%f is a negative.",num);
	return 0;
}
