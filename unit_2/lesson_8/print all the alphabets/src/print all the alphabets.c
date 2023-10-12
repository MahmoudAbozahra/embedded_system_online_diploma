/*
 ============================================================================
 Name        : print.c
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
	char alph[27];
	int x;
	char *ptr;
	ptr=alph;
	for(x=0;x<26;x++)
	{
		*ptr=x+'A';
		 ptr++;
	}

	ptr=alph;
	printf("the alphabets are :\n");
	for(x=0;x<26;x++)
	{
		printf("%c ",*ptr);
		ptr++;
	}
	printf("\n\n");

	return 0;
}
