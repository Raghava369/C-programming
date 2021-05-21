#include<stdio.h>
main()
{
	int a[5][5],i,j,r,c,l=0;
printf("\n enter rows:");
scanf("%d",&r);
printf("\n enter coloumns:");
scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	 
	printf("\n transpose matrix");
	printf("\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d",a[j][i]);
		}
		printf("\n");
	}
	if(r!=c)
		printf("\n not symmetric matrix");
	else
	{
		for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		if(a[i][j]==a[j][i])
	 			l++;
		 }
	 }
	 if(l==r*r)
		printf("symmetric matrix");
	else
		printf("\n not symmetric");
	}
	
}
