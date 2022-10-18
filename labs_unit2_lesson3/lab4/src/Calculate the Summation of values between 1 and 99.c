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
  int i , sum=0;
  for(i=1;i<=99;i++)
  {
	  sum+=i;
  }
  printf("summation of value between (1 and 99) is :%d",sum);
}
