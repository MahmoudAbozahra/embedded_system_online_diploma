/*
 ============================================================================
 Name        : Ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	float x,y,z;
	printf("Enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if(x>y)
		if(x>z)
			printf("the largest number is :%f",x);
		else
			printf("the largest number is :%f",z);
	else if(y>x)
		if(y>z)
			printf("the largest number is :%f",y);
		else
			printf("the largest number is :%f",z);
	else
		printf("the largest number is :%f",z);

	return 0;
}
