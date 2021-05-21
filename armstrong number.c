#include<stdio.h>
main()
{
	int n,temp,sum=0,digit;
	printf("enter n:" );
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("n is amstrong number");
	}
	else
	{
		printf("n is not a amstrong number");
	}
}
