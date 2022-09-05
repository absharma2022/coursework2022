#include<stdio.h>
#include<math.h>
int main()
{
int a,b,max;
printf("Enter any two numbers \n");
scanf("%d%d",&a,&b);
if(a>=b)
max=a;
else
max=b;
printf("Largest integer between eneterd two integer is = %d \n",max);
return 0;

}

