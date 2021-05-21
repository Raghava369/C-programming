#include<stdio.h>
#include<string.h>
main()
{
	char str1[10],str2[10];
	printf("\n enter string 1:");
	gets(str1);
	strcpy(str2,str1);
	printf("string 2 is ");
	puts(str2);
}
