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
	int n,i,arr[15];
	int *ptr;
	printf("input the number of elements of array max 15 :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	ptr=&arr[0];
	printf("input %d number of elements in the array:\n",n);
	fflush(stdin);fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("element -%d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[n-1];
	printf("the elements of array in reverse order are:");
	for(i=n;i>0;i--)
	{
		printf("\n element -%d:%d",i,*ptr);
		ptr--;
	}

	return 0;
}
