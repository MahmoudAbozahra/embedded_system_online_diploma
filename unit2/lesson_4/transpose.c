#include<stdio.h>
int main()
{
     float a[3][3];
    float t[3][3];
    for(int r=0;r<3;r++)
    {
    	for(int c=0;c<3;c++)
    	{
    		printf("enter the item num (%d,%d):",r,c);
    		fflush(stdin);fflush(stdout);
    		scanf("%f",&a[r][c]);
    	}
    }
    printf("the matrix is :\n");
    for(int r=0;r<3;r++)
       {
       	for(int c=0;c<3;c++)
       	{
       		printf("%2.2f\t",a[r][c]);
       	}
       	printf("\n");
       }
    printf("the transpose matrix is :\n");
       for(int r=0;r<3;r++)
          {
          	for(int c=0;c<3;c++)
          	{
          		t[r][c]=a[c][r];
          	}

          }
          for(int r=0;r<3;r++)
             {
             	for(int c=0;c<3;c++)
             	{
             		printf("%2.2f\t",t[r][c]);
             	}
             	printf("\n");
             }

    return 0;
}