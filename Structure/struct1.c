// To study structure how to initialize structure variables
#include<stdio.h>
#include<math.h>
#include<string.h>
struct struct1
{
    char name[20];
    int age,score;
    float avg;

};
int main()
{
struct struct1 s1={"Abhishek Sharma",27,100,101},s2,s3;
strcpy(s1.name,"Abhi Sharma");
s1.age=26;
s1.score=100;
s1.avg=101;
printf("The data of %s is: his age is %d and score is %d",s1.name,s1.age,s1.score);

return 0;

}


