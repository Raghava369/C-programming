#include<stdio.h>
main()
{
	int a[10],large,small,n,i,l,s,seclarg,secsmall;
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
	a[l]=0;
	seclarg=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>seclarg&&a[i]!=large)
		{
			seclarg=a[i];
		}
	}
	a[l]=large;
	secsmall=large;
	for(i=0;i<n;i++)
	{
		if(a[i]<secsmall&&a[i]!=small)
		{
			secsmall=a[i];
		}
	}
	printf("\n large is %d\n small is %d",large,small);
	printf("\n second largest is %d\n second smallest is %d",seclarg,secsmall);
}
