#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i;
	printf("\n enter some text");
	gets(str);
	str[0]=str[0]-32;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='.'&&str[i+1]>='a'&&str[i+1]<='z')
		str[i+1]=str[i+1]-32;
	}
	puts(str);
}
