#include<stdio.h>
struct student
{
	char name[20];
	char roll[20];
};
main()
{
	struct student s[5];
	int i;
	for(i=0;i<3;i++)
	{
		printf("name of %d student",i+1);
		gets(s[i].name);
		printf("\n roll number of %d student",i+1);
		gets(s[i].roll);
	}
	for(i=0;i<3;i++)
	{
		printf("\n name of %d student is %s",i+1,s[i].name);
		printf("\n roll number of %d student is %s",i+1,s[i].roll);
	}
}
