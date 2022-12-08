// Accessing structure elements

# include <stdio.h>
# include <string.h>
struct
{
char name[15]; /* childs name */
int age; /* childs age */
int grade; /* childs grade in school */
} boy, girl;
int main()
{
strcpy(boy.name,"Herbert");
boy.age = 15;
boy.grade = 75;
girl.age = boy.age - 1; /* she is one year younger */
girl.grade = 82;
strcpy(girl.name,"Fousett");
printf ("%s is %d years old and got a grade of %d\n",girl.name, girl.age, girl.grade);
printf ("%s is %d years old and got a grade of %d\n",boy.name, boy.age, boy.grade);
return 0;
}