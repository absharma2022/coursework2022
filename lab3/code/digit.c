// This is the code to count and sum of the digits of a user entered number

#include<stdio.h>
#include<math.h>

int main()
{
int n,count=0,sum=0,r,i;
printf("Please enter an integer number \n");
scanf("%d",&n);
for(i=1;i<100;i++)
{

r=n%10;
sum=sum+r;
count=count+1;
n=n/10;
if(n==0)
break;

}
printf("The sum of digits of this above entered number is = %d\n The number of digits in the entered above number is = %d",sum,count);

return 0;

}
