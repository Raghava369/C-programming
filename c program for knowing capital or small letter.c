#include<stdio.h>
void main()
{
char ch;
printf("\n enter character:");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
{
printf("\n %c is capital",ch);	
}
else if(ch>='a' && ch<='z')
{
printf("\n %c is small letter",ch);	
}
}
