#include<stdio.h>
main()
{
	int a,b,sum;
	int *p,*q;
	printf("\n enter two numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=(*p)+(*q);
	printf("sum is %d",sum);
}
