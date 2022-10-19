/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char choice;
	float rad,area,circumf;
	printf("Enter the circle radius :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&rad);
	printf("Enter your choice (a to print the area , c to print the circumference): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	switch(choice)
	{
	case 'a':
	{
		area=3.14*rad*rad;
		printf("area is :%f",area);
	}
	break;
	case 'c':
	{
		circumf=3.14*2*rad;
		printf("circumference is :%f",circumf);
	}
	break;
	default:
		printf("wrong choice \n");
        break;
	}
	return 0;
}

