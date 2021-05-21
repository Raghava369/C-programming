#include<stdio.h>
main()
{
	int a,b,x;
	printf("\n enter a,b values");
	scanf("%d%d",&a,&b);
	x=(a>b)?a:b;
	printf("\n greatest number is %d",x);
}
