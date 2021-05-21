#include<stdio.h>
main()
{
	int a[3][3],i,j,n,key,count=0;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n enter elements of matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrix is:");
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n enter key:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 if(key==a[i][j])
		 {
		 	printf("\n key is in the matrix at row %d and at column %d",i,j);
		 	count=1;
		 }	
		}
	}
	if(count==0)
	{
		printf("\n element not found");
	}
	
	
	
	
	
	
}
