#include <stdio.h>
int calcprime(int num);

int main()
{
   int n1,n2,i,flag;
   printf("enter the two value (interval):\r\n");
   fflush(stdin); fflush(stdout);
   scanf("%d %d",&n1,&n2);
   printf("the prime number between %d,%d is:",n1,n2);
   for(i=n1+1;i<n2;i++)
   {
     flag=calcprime(i);
    if(flag==0)
    printf("%d \t",i);
   }
  
    return 0;
}
int calcprime(int num)
{
    int flag=0,i;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
        flag=1;
        break;
        }
    }
     return flag;
}