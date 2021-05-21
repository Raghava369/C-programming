#include<stdio.h>
#include<string.h>
main()
{
	char str[10],i;
	printf("\n enter a string");
    scanf("%[^\n]%*c",str);
    puts(str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]>='a'&&str[i]<='z')
    	{
    	str[i]=str[i]-32;
        }
    	else if(str[i]>='A'&&str[i]<='Z')
    	{
    	str[i]=str[i]+32;
        }
	}
    printf("string is %s",str);
}
