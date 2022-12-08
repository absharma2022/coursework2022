// Accessing structure elements and size of structure demonistration
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
int roll, age;
char branch;
} s1, s2;
void main()
{
   // s1.branch='s';
//strcpy(s1.branch,"Physics");
printf("\n enter branch , roll, age =  ");
scanf("%c%d%d",&s1.branch,&s1.roll,&s1.age);
//s1.branch='P';
s2.roll = s1.roll;
printf("students details=\n");
printf("%d %d %c",s1.roll,s1.age,s1.branch);
printf("\n%d",s2.roll);
printf("\n The size of struct is = %d",sizeof(struct student));
printf("\n The size of structure variable s1 is = %d",sizeof(s1));
printf("\n The size of structure variable s2 is = %d",sizeof(s2));
}