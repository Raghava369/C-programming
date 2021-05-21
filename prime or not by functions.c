#include<stdio.h>
void prime(int);
main()
{
	int a;
	printf("\n enter a :");
	scanf("%d",&a);
	prime(a);
}
void prime(int x)
{
	int i,key=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			key++;
		}
	}
	if(key==2)
	{
		printf("\n the number is prime number");
	}
	else if(key>2)
	{
		printf("\n the number is composite");
	}
	else if(x!=1)
	{
		printf("\n invalid number");
	}
	else
	{
		printf("\n neither prime nor composite");
	}
}

