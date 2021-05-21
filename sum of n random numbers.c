#include<stdio.h>
main()
{
	int n,sum,i,num;
	printf("\n enter n:");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		printf("\n enter num:");
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("\n sum is %d",sum);
}
