/*
 ============================================================================
 Name        : Ex_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int a=10,b=20,x;
	printf("Befor swap a=%d,b=%d \n",a,b);
	x=a;
	a=b;
	b=x;
	printf("After swap a=%d,b=%d ",a,b);
	return 0;
}
