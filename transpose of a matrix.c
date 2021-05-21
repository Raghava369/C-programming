#include<stdio.h>
main()
{
	int a[5][5],i,j,r,c;
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
}
