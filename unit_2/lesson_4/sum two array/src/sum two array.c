/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int r,c;

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter the element of matrix a num (%d,%d):",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("enter the element of matrix b num (%d,%d):",r,c);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[r][c]);
			}
		}
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				sum[r][c]=a[r][c]+b[r][c];
			}
		}
		printf("the sum of two matrix is : \n");
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("%.2f \t",sum[r][c]);
			}
			printf("\n");
		}
		return 0;
}

