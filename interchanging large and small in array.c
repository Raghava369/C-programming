#include<stdio.h>
main()
{
	int a[10],large,small,n,i,c,l,s,temp;
	printf("\n enter n :");
	scanf("%d",&n);
	printf("\n enter elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=a[0];
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			l=i;
		}
		else if(a[i]<small)
		{
			small=a[i];
			s=i;
		}
		
		
	}
	temp=a[l];
	a[l]=a[s];
	a[s]=temp;
	
	printf("\n small is %d and large is %d",small,large);
	
	
	for(i=0;i<n;i++)
	printf("\n %d",a[i]);
}
