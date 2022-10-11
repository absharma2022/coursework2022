// This is c code to find a user entered an integer number is prime or not

#include<stdio.h>
#include<math.h>

int main()
{
int i=2,n,flag=0;
printf("please enter an interger number \n");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
flag=1;
break;
}
i=i+1;
}
if(flag==0)
printf("The entered number is a prime number \n");
else
printf("the entered integer number is not prime number \n");
return 0;
}
