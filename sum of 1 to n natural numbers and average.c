#include<stdio.h>
main()
{
	float i,n,sum,average;
	printf("\n enter n:");
	scanf("%f",&n);
	printf("\n sum of 1 to %f natural numbers:",n);
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("\n %f",sum);
	average=sum/n;
	{
		printf("\n average of %f natural numbers:",n);
		printf("\n %f",average);
	}
}
