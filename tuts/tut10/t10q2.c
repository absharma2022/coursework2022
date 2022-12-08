// C program to reverse the string using pointer
// also contain comment part how to print without using pointer
#include<stdio.h>
#include<math.h>
int main()
{
// char str[10]={'h','e','l','l','o','\0'},revstr[10];
char str[10],revstr[10];
int i=0,j,count=0;
printf("Please enter the string\n");
gets(str);
puts(str);
while(str[i]!='\0')
{
    i++;
}
count=i;
for(i=count,j=0;i>=0;i--,j++)
{
revstr[j]=str[i];

}

revstr[j+1]='\0';

for(j=0;j<=count;j++)
printf("%c",revstr[j]);

return 0;
}
