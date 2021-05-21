#include<stdio.h>
main()
{
	int a[10],i,j,n,mid,key;
	printf("enter elements into array:");
	scanf("%d",&n);
	printf("\n enter elements into array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		if(a[i]>a[j])
   		{
   			a[i]=a[i]+a[j];
   			a[j]=a[i]-a[j];
   			a[i]=a[i]-a[j];
		   }
	   }
   }
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
	printf("\n enter key:");
	scanf("%d",&key);
	i=0;
	j=n-1;
	while(i<n)
	{
		mid=(i+j)/2;
		if(key==a[mid])
		{
			printf("element found at %d",mid);
	        break;
		}
		else if(key==a[j])
		{
			printf("element found at %d",j);
			break;
		}
		else if(key<a[mid])
		{
			if(key<a[i])
			{
				printf("\n element not found");
				break;
			}
			else
		
			j=mid;
		}
		else if(key>a[mid])
		{
			if(key>a[j])
			{
			printf("\n element not found:");
			break;
		    }
			else
			i=mid;
		}
		
	}
}
