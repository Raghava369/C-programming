#include<stdio.h>
main()
{
	int i,j,distance,n;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=-n;j<=n;j++)
		{
			if(abs(i)+abs(j)>n)
			{
				printf(" ");
			}
			else if(j==0)
			{
				printf("0");
			}
			else
			{
				distance=abs(j);
				printf("%d",distance);
			}
		}
		printf("\n");
	}
}
