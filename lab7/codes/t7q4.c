// c program to convert a decimal to binary

#include<stdio.h>
#include<math.h>

int main()
{
double num,t;
int n,i,size=100,a[size],frac[size],j,k;
printf("Please enter any positive number \n");
scanf("%lf",&num);
n=num;
t=num-n;
printf("The entered number is =%lf\n integer part of number is =%d\nThe fractional part of number is =%lf\n",num,n,t);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
for(j=0;j<5;j++)
{
t=t*2;
frac[j]=t;
if(t>=1)
t=t-1;
if(t==0.0000)
break;
}
printf("The binary number of entered dcimal is:\n");
for(k=i-1;k>=0;k--)
{
printf("%d",a[k]);
}
printf(".");

for(k=0;k<=j;k++)
{
printf("%d",frac[k]);
}
return 0;
}
