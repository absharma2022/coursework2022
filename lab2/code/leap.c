#include<stdio.h>
#include<math.h>
int main()
{
int yr;
printf("Enter year \n");
scanf("%d",&yr);
if(yr%400==0)
printf("The entered year is a leap year \n");
else if(yr%100==0)
printf("The entered year is not a leap year \n");
else if(yr%4==0)
printf("The entered year is a leap year \n");
else
printf("The entered year is not a leap year \n");
return 0;

}

