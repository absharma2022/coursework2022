// C program that takes a number, prints -1 if the number is less than 0. 1 if the number is grater than 0 and 0 if it is zero

#include<stdio.h>
#include<math.h>

int main()
{
int n,t=0;
printf("please enter the number\n");
scanf("%d",&n);
if(n<0)
t=-1;
else if(n>0)
t=1;
else
t=0;
printf("The entered number was %d So result is = %d\n",n,t);
}

