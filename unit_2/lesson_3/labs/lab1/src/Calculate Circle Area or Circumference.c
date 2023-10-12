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
	char choise;
	float rad,area,circumf;
	printf("Enter the radius :");
	fflush(stdin); fflush(stdout);
	scanf("%f", &rad);
	printf("Enter your choise (a to print the area , c to print the circumference ) :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choise);
	if(choise == 'a')
	{
		area=3.14*rad*rad;
		printf("area is: %f ",area);
	}
	else if(choise == 'c')
	{
		circumf=3.14*2*rad;
		printf("circumference is : %f",circumf);
	}
	else
		printf("wrong choise \n");
	return 0;

}
