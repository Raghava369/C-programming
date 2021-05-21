#include<stdio.h>
main()
{
	int a[10],i,n,small,p=0;
	printf("\n enter n:");
	scanf("%d",&n);
	printf("\n enter n elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	small=a[0];
   for(i=1;i<n;i++)
   {
   	 if(a[i]<=small)
   	 {
   	 	small=a[i];
   	 	p=i;
	 }
   }
   printf("\n smallest element is %d at %d ",small,p);
}
