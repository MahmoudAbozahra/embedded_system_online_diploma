/*
 ============================================================================
 Name        : insert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a[20];
	int i,n,ins,location;
	printf("enter the num of element : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the ins num :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ins);

	printf("enter the location :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=n;i>=location;i--)
	{
		a[i]=a[i-1];
	}
	n++;
	a[location-1]=ins;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
