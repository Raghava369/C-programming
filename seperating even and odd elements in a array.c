
#include<stdio.h>
main()
{
	int a[10],b[10],c[10],i,n,j,c1;
	printf("\n number of elements that to be stored in a array:");
	scanf("%d",&n);
	printf("\n enter elements into a array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,j=0,c1=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
			c1++;
		}
	}
  printf("\n even elements:");
  for(j=0;j<c1;j++)
  {
  printf("%d \t",b[j]);
  }
    for(i=0,j=0,c1=0;i<n;i++)
		{
		if(a[i]%2!=0)
		{
			c[j]=a[i];
			j++;
			c1++;
		}
	}

 printf("\n odd elements :");
 for(j=0;j<c1;j++)
 {
 	printf("%d\t",c[j]);
 }
}
 
