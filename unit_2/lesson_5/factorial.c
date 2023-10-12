#include <stdio.h>
int fact(int num);

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the factorial of %d is: %d",5,fact(5));
    return 0;
}
int fact(int num)
{
    if(num!=1)
    return num*fact(num-1);
}