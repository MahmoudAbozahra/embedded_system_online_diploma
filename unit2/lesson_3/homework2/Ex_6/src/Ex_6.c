/*
 ============================================================================
 Name        : Ex_6.c
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
	int a,b,x;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	x=a;
	a=b;
	b=x;
	printf("After swapping, value of a :%d \n",a);
	printf("After swapping, value of b :%d",b);
	return 0;
}
