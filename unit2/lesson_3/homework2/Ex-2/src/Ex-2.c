/*
 ============================================================================
 Name        : Ex-2.c
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
	printf("Enter an alphabet :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		printf("%c is a vowel.",x);
	else
		printf("%c is a constant.",x);
	return 0;
}
