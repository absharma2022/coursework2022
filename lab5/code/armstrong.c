// This is code to see number(which is three digits) is armstrong or not 

#include<stdio.h>
#include<math.h>

int main()
{
int n,i,rem,sum=0,t;
printf("Please enter the number\n");
scanf("%d",&n);
t=n;
for(i=1;i>0;i++)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
if(n==0)
break;
}
if(sum==t)
printf("The number is armstrong number and sum is %d \n",sum);
else
printf("The number is not armstrong number and sum is %d \n",sum);

return 0;

}
