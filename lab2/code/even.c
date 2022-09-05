#include<stdio.h>
#include<math.h>
int main()
{
int n,i=2, flag=0;
printf("enter the value of n \n");
scanf("%d",&n);
if(n%2==0)
{
printf("entered value is even so we have to include this \n");
flag=1;
}
else
{
printf("entered value is odd so we have to exclude this \n");
}

if(flag==1)
{
printf("if loop is excuted since enter number is even \n");
while(i<=n)
{
printf("%d\n",i);
i=i+2;
}
}
else
{
printf("else loop is excuted since enter number is odd \n");
while(i<n)
{printf("%d\n",i);
i=i+2;
}
}
return 0;
}
