#include<stdio.h>
main()
{
	int n,i,j,distance;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=n-1;i>=1-n;i--)
	{
		for(j=1-n;j<=n-1;j++)
		{
        distance=(abs(i)>abs(j))?abs(i):abs(j);
        printf("%d ",distance+1);
		}
		printf("\n");
	}
}
