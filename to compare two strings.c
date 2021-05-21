#include<stdio.h>
int main()
{
	char str1[10],str2[10];
	int i,length=0,count=0;
	printf("enter a string:");
	gets(str1);
	printf("\n enter another string:");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	length=length+1;
	for(i=0;str2[i]!='\0';i++)
	count++;
	if(length==count)
	{
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			printf("\n not equal");
			exit(0);
		}
	
	}
	printf("\n equal");
    }
   else
	{
		printf(" not equal");
	}
	
}
