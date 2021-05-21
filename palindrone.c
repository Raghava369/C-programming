#include<stdio.h>
main()
{
	int number,reminder,rev=0,i,n,sum=n,p=n,j;
	printf("\n enter n:");
	scanf("%d",&number);
	n=number;
	for(i=0;number!=0;i++)
	{
		reminder=number%10;
		rev=(rev*10)+reminder;
		number=number/10;
	}
	if(rev==n)
	{
		printf("\n %d is palindrone ",n);
	}
	else
	{
		for(i=0;p!=rev;i++)
		{
			sum=p+rev;
			p=sum;
			rev=0;
			for(i=0;sum!=0;i++)
			{
			reminder=sum%10;
			rev=(rev*10)+reminder;
			sum=sum/10;
		   }
		}
		printf("\n %d is palindrone ",p);
	}
}
