#include<stdio.h>
#include<string.h>
main()
{
	char a[3][10],temp[10];
	int i,j;
	printf("\n enter names into array:");
	for(i=0;i<3;i++)
	gets(a[i]);
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
		
		if(strcmp(a[j],a[i])<0)
		{
		
			strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
		    strcpy(a[j],temp);
		}
	}
   }
	for(i=0;i<3;i++)
	puts(a[i]);
}
