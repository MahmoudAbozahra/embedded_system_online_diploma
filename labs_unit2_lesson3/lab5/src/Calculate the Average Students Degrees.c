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
	 int i,sum=0,degree;
	 float average;
	 for(i=1;i<=7;i++)
	 {
		 printf("Enter the degree of student number %d:",i);
		 fflush(stdin);fflush(stdout);
		 scanf("%d",&degree);
		 sum+=degree;
	 }
	 average=sum/7;
	 printf("the average is : %f",average);
	 return 0;

}
