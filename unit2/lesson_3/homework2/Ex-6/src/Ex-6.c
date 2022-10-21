/*
 ============================================================================
 Name        : Ex-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int num,sum=0;
	printf("Enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}
