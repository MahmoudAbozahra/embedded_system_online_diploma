/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char a[20]="mahmoud abozahra";
	char b[20];
	int i;
	while(a[i]!=0)
	{
		b[i]=a[i];
		i++;
	}
	b[i]=0;
	printf("%s \n",b);

	return 0;
}
