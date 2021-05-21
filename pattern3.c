#include<stdio.h>
main()
{
	int i,j,n,r,p;
	printf(" enter base of pattern n:");
	scanf("%d",&n);
	r=n/2;
	p=n/2+2;
	for(i=1;i<=(n/2+1);i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=r||j>=p)
			{
				printf("  ");
			}
			else if(j>r&&j<p)
			{
				printf(" #");
			}
		}
		r--;
		p++;
		printf("\n");
	}
	
}
