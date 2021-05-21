#include<stdio.h>
void main()
{
	int a[10],n,i,j,count=0;
	printf("\n enter number of elements  to be stored in array:");
    scanf("%d",&n);
    printf("\n enter n elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n elements in the array:");
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);
    for(i=0,j=0;i<n;i++,j++)
    a[j]=a[i];
    printf("\n unique elements are:");
    for(i=0;i<n;i++)
    {
    	 	count=0;
    	    for(j=0;j<n;j++)
    	    {
    	    	if(a[i]==a[j])
    	    	count++;
			}
			if(count==1)
			{
				printf("\t %d",a[i]);
			}
	}
}
