// c program to input string and display it

#include<stdio.h>
#include<math.h>

int main()
{
int i,size=10;
char str[size];
printf("Please enter the character constsants \n");
for(i=0;i<size;i++)
scanf("%s",&str[i]);
printf("The string of entered character constants is: \n");
for(i=0;i<size;i++)
printf("%s",str[i]);

return 0;

}
