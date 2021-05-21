#include<stdio.h>
main()
{
	int i,n,product;
	printf("\n enter n:");
	scanf("%d",&n);
	product=n;
	i=1;
	while(i<n)
	{
		product=product*(n-i);
		i++;
	}
	printf("\n n factorial is %d",product);
}
