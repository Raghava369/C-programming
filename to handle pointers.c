#include<stdio.h>
main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	printf("\n values %d stored at %u",a,&a);
	printf("\n values %d stored at %u",*ptr,ptr);
	*ptr=25;
	printf("\n value at a is %d",a);
}
