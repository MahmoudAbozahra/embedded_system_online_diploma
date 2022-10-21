/*
 ============================================================================
 Name        : Ex-8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	char x;
	float n1,n2;
	printf("Enter operator either + or - or * or / :-");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("Enter two operands :");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&n1,&n2);
	switch(x)
	{
	case'+':
		printf("%f + %f = %f ",n1,n2,n1+n2);
		break;
	case'-':
		printf("%f - %f = %f ",n1,n2,n1-n2);
		break;
	case'*':
		printf("%f * %f = %f ",n1,n2,n1*n2);
		break;
	case'/':
		printf("%f / %f = %f ",n1,n2,n1/n2);
		break;
	default:
		printf("Error!! operator is not correct");
		break;
	}
	return 0;
}
