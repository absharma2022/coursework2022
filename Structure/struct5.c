// passing structure element to function
#include<stdio.h>
#include<string.h>

void main()
{
struct student
{
char name[30];
char branch[25];
int roll;
};struct student s;

printf("\n enter name=");
gets(s.name);


printf("\nEnter branch:");
gets(s.branch);

printf("\nEnter roll:");
scanf("%d",&s.roll);

display(s.name,s.roll,s.branch);
}
display(char name[], int roll, char branch[])
{
printf("\n name=%s,\n roll=%d, \n branch=%s",name, roll,branch);
}
