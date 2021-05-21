#include<stdio.h>
main()
{
	int n,temp,result=1;
	printf( "\n enter n:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		result=result*temp;
		temp--;
	}
	printf("\n factorial of %d is %d",n,result);
}
