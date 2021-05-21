#include<stdio.h>
main()
{
	int i,n,sum;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n sum of n natural numbers is:");
    sum=0;
	i=1;
	while(i<=n)
	{
	sum=(sum+i);
	i=(i+1);
    }
	printf("\n %d",sum); 
}
