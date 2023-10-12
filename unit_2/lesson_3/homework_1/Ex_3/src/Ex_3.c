/*
 ============================================================================
 Name        : Ex_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int x,y,sum;
	printf("Enter two integer number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&x,&y);
	sum=x+y;
	printf("sum : %d",sum);
	return 0;
}
