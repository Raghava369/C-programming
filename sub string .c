#include<stdio.h>
#include<string.h>
main()
{
	char str[20],substr[20],substrrev[20];
	int i,index,num,l,k;
	printf("\n enter a string");
	gets(str);
	printf("\n enter index and number os characters of substring"); 
    scanf("%d%d",&index,&num);
   
    	for(i=0;i<num;i++)
    	{
    		substr[i]=str[index+i];
    		substrrev[i]=str[index-i];
		}
		substr[i]='\0';
		substrrev[i]='\0';
		l=strlen(substr);
		k=strlen(substrrev);
	printf("\n left to right\t");
	if(l==num)
	puts(substr);
  else
	printf("invalid string");
   printf("\n right to left  ");
   if(k==num)
	puts(substrrev);
   else
	printf(" invlaid string");
	
}
