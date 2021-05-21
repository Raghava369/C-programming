#include<stdio.h>
struct CSEfacality
{
	char name[20];
	char subject[10];
	char remarks[10];
};
main()
{
	struct CSEfacality M,C,E,P;
	printf("\n enter the name of the teacher:");
	gets(M.name);
	printf("\n enter the subject :");
	gets(M.subject);
	printf("\ngive remarks");
	gets(M.remarks);
	printf("\n enter the name of the teacher:");
	gets(C.name);
	printf("\n enter the subject :");
	gets(C.subject);
	printf("\ngive remarks");
	gets(C.remarks);
	printf("\n enter the name of the teacher:");
	gets(E.name);
	printf("\n enter the subject :");
	gets(E.subject);
	printf("\ngive remarks");
	gets(E.remarks);
    printf("\n enter the name of the teacher:");
	gets(P.name);
	printf("\n enter the subject :");
	gets(P.subject);
	printf("\ngive remarks");
	gets(P.remarks);
	printf("\n CSE facality  details are");
	printf("\n name is %s\n subject is %s\n remarks are %s",M.name,M.subject,M.remarks);
	printf("\n name is %s\n subject is %s\n remarks are %s",C.name,C.subject,C.remarks);
	printf("\n name is %s\n subject is %s\n remarks are %s",E.name,E.subject,E.remarks);
	printf("\n name is %s\n subject is %s\n remarks are %s",P.name,P.subject,P.remarks);

}

