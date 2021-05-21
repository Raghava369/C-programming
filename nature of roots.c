#include<stdio.h>
main()
{
	float a,b,c;
	printf("enter coefficients of equation:");
	scanf("%f%f%f",&a,&b,&c);
	if(b*b-4*a*c==0)
	{
		printf("\n roots are real and equal");
	}
	else if(b*b-4*a*c>0)
	{
		printf("\n roots are real and not equal");
	}
	else 
	{
		printf("\n roots are imaginary and not real");
	}
}
