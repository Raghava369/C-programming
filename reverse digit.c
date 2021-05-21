#include<stdio.h>
main()
{
	int n,i,r;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n reverse digit is:");
	i=1;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		printf("%d",r);
		i++;
	}
}
