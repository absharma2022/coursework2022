// This is code is to reverse the digits of a user entered number

#include<stdio.h>
#include<math.h>

int main()
{
int n,rev=0,rem,i;
printf("Please enter an integer number \n");
scanf("%d",&n);
for(i=1;i>0;i++)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
if(n==0)
break;

}
printf("The reverse number of the entered above number is = %d",rev);

return 0;

}
