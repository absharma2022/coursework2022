// This is the c code to find factorial of any given number
#include<stdio.h>
#include<math.h>
int main()
{
int n, i,fac=1;
printf("Enter any positive integr \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
fac=fac*i;
printf("factorial of given number is = %d\n",fac);

return 0;
}