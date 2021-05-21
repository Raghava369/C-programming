#include<stdio.h>
main()
{
	int n,i,count=0;
	for(n=2;n<=100;n++)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
		printf("\n %d",n);
	    }
	    count=0;
	}
	
}
