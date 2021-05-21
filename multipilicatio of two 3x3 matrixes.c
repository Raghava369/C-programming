#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,k,l,sum;
	printf("enter elements of matrix 1:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("enter elements of matrix 2:");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		scanf("%d",&b[k][l]);
	}
	printf("\n 3x3 matrix 1 is:");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\t%d",a[i][j]);
	    }
	    printf("\n");
	}
	printf("\n matrix 2 is:");
	printf("\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
		printf("\t%d",b[k][l]);
	    }
	    printf("\n");
	}
	printf("\n multiplication of matrix:1 and matrix:2");
	printf("\n");
	sum=0;
	for(i=0;i<3;i++)
	{
	for(l=0;l<3;l++)
	{
		for(j=0,k=0;j<3,k<3;j++,k++) 
		{
			sum=sum+a[i][j]*b[k][l];
		}
		printf("\t %d",sum);
		sum=0;
	}
	printf("\n");
    }

	
}
