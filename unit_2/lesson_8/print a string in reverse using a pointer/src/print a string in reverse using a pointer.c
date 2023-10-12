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
#include <string.h>

int main()
{
	char str[50]="mahmoud";
	char rev[50];
	char *pstr=str;
	char *prev=rev;
	int i=0;

	while(*pstr)
	{
		pstr++;
		i++;
	}
	while(i>0)
	{
		pstr--;
		*prev=*pstr;
		prev++;
		i--;
	}
	*prev='\0';
	printf("\nreverse string :%s",rev);

	return 0;
}
