#include<stdio.h>
main()
{
	int n,sum,temp,r;
	printf("\n enter n:");
	scanf("%d",&n);                                                                 
    temp=n;
	for(sum=0;n!=0;sum=sum+r)
	{
		r=n  %10;
		n=n/10;
    
	}
	printf("\n the sum of the digits is %d in a number %d",sum,temp);
}
