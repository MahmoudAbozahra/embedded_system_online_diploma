/*
 ============================================================================
 Name        : Calculate.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a ,b ;
	printf("Enter two numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&a,&b);
	printf("the minimum number is %d \n", (a<b)?a:b );
	return 0;

}
