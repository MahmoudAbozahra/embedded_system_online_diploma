/*
 ============================================================================
 Name        : find.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char text[200];
	int i=0;
	printf("enter the text :");
	fflush(stdin);fflush(stdout);
	gets(text);
	while(text[i]!=0)
	{
		i++;
	}
	printf("the length of text is :%d",i);
	return 0;
}
