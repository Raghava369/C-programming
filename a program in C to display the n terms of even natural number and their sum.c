#include<stdio.h>
main()
{
	int n,i,sum;
	printf(" enter n:");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=2*n)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
		    sum=sum+i;
		}
		i++;
	}
	printf("\n sum of %d terms even numbers is %d",n,sum);
}
