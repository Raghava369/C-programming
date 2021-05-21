#include<stdio.h>
main()
{
	float i,n,sum;
	printf("\n enter n:");
	scanf("%f",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
	printf("%f",1/i);	
	sum=sum+1/i;
	i++;
	}
	printf("\n sum is %f",sum);
}
