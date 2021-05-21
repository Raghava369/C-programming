#include<stdio.h>
main()
{
	int x,y,i,p;
	printf("enter values: \n");
	scanf("%d%d",&x,&y);
	p=1;
    for(i=1;i<=y;i++)
    {
    	p=p*x;
	}
	printf("\n x power y id %d",p);
}
