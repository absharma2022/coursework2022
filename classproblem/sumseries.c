#include<stdio.h>
#include<math.h>
 int main()
{
int n=20,i=2;
float sum=0,j=2;
while(i<=20)
{
sum=sum+(1/j);
i=i+2;
j=j+2;
}
printf("The summation of the series is = %f \n", sum);
return 0;
}
