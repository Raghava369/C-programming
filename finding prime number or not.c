#include<stdio.h>
void main()
{
	int count,n,i;
	printf("\n enter n:");
	scanf("%d",&n);
	i=1;
    count=0;
	while(i<=n)
	{
	{
		if(n%i==0)
		count=count+1;
    } 
    i=i+1;
    }
    if(count==2)
    {
    	printf("\n %d is prime",n);
	}
	else if(n!=1)
	{
		printf("\n %d is composite",n);
	}
	else if(n=1)
	{
		printf("\n %d neither prime nor composite",n);
	}
}
	
		


	


