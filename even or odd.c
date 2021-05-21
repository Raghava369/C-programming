#include<stdio.h>
main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	if((n&1)==0&&n!=0)
	{
		printf(" even number");
	}
	else if((n&1)==1)
	{
		printf(" odd number");
	}
	else if(n==0)
	{
		printf("neither even nor odd");
	}
}
