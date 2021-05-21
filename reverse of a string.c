#include<stdio.h>
#include<string.h>
main()
{
	char str[10],i,j,str1[10],length;
	printf("\n enter character:");
	gets(str);
	printf("\n u entered:");
	puts(str);
	length=strlen(str);
	printf("\n length is %d",length);
	length=(length-1);
	for(i=0,j=length;i<length,j>=0;i++,j--)
	{
		str1[j]=str[i];
	}
	printf("\n");
	puts(str1);
}

