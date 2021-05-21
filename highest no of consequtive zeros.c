#include<stdio.h>
main()
{
	int i,n,d,a[100],count=0,r,flag[100],c=0,big,j;
	printf("\n enter n and d:");
	scanf("%d%d",&n,&d);
	for(i=0;n!=0;i++)
	{
		r=n%d;
		a[i]=r;
		count++;
		n=n/d;
	}     
	for(i=0;i<count;i++)
	{
		if(a[i]!=0)
		c++;
	
	}
		printf("%d%d",i,c);
	if(i==c)
	{
	printf("\n-1");
	exit (0);
   }
	c=0;
	flag[0]=0;
	for(i=0;i<count;i++)
	{
		if(a[i]==0)
		{
          flag[j]++;
		}
		else 
		{
			j++;
			flag[j]=0;
			c++;
		}
		
	}

	big=flag[0];
	for(j=1;j<c;j++)
	{
		if(flag[j]>big)
		{
			big=flag[j];
		}
	}
	printf("\n %d",big);
	
}
