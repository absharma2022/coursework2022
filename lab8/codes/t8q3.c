// C program to chek weather a number is prime or not

#include<stdio.h>
#include<math.h>

int main()
{
int i=2,n,flag=0;
printf("please enter the number\n");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
flag=1;
break;
}
i++;
}

if(flag==0)
printf("Entered number is a prime number \n");
else
printf("Entered number is not a prime number \n");

return 0;
}
