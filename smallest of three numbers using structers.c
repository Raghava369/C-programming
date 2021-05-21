#include<stdio.h>
struct smallest
{
	int a;
	int b;
	int c;
}s;
main()
{
	printf("\n enter a b c values:");
	scanf("%d%d%d",&s.a,&s.b,&s.c);
	 if(s.a<=s.b)
	 {
	 	if(s.a<=s.c)
	 	printf("\n %d is smallest",s.a);
	 	else
	 	printf("\n %d is smallest",s.c);
	 }
	 else  if(s.b<=s.a)
	 {
	 	if(s.b<=s.c)
	 	printf("\n %d is smallest",s.b);
	 	else
	 	printf("\n %d is smallest",s.c);
	 }
}
