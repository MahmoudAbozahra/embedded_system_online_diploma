#include<stdio.h>
int main()
{
    char text[1000];
	char check;
	int count=0;
	printf("enter the text: ");
	gets(text);
	printf("enter the check char:");
	scanf("%c",&check);
	for(int i=0;text[i]!='\0';i++)
	{
		if(text[i]==check)
			count++;
	}
    printf("the freq of %c is : %d",check,count);
    return 0;
}