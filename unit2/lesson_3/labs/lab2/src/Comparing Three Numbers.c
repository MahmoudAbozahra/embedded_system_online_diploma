/*
 ============================================================================
 Name        : Comparing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three values \n:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("the largest value is : %d \n",a);
		else
			printf("the largest value is : %d \n",c);
	}
	else
	{
		if(b>c)
			printf("the largest value is:%d",b);
		else
			printf("the largest value is : %d",c);
	}
	return 0;

}
