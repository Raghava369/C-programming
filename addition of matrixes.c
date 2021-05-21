#include<stdio.h>
main()
{
	int a[3][3],b[3][3],s[3][3],i,j,r,c;
	printf("\n enter rows:");
	scanf("%d",&r);
	printf("\n enter coloumns:");
	scanf("%d",&c);
	printf("\n enter elements:");
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	scanf("%d",&a[i][j]); 
     }
   }
	printf("\nenter elements:");
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	scanf("%d",&b[i][j]); 
     }
   }
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t %d",s[i][j]);
		}
		printf("\n");
	}
	
}
