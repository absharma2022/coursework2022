// c program to find the sum and average of 5 numbers

#include<stdio.h>
#include<math.h>

int main()
{
int i,n=5;
double num,avg,sum=0;
printf("please enter any 5 numbers\n");
for(i=1;i<=n;i++)
{
scanf("%lf",&num);
sum=sum+num;
}
avg=sum/n;
printf("Sum of 5 entered numbers is = %lf\nAverage of 5 enteerd numbers is = %lf\n",sum,avg);

return 0;
}

