#include<stdio.h>
main()
{
	int  a[10],i,n,j,c;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n enter elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n elements in a array:");
	for(i=0;i<n;i++)
	printf("\t %d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("ascending order:");
	for(i=0;i<n;i++)
	printf("\n %d",a[i]);
}
