#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,min;
printf("Enter any three numbers \n");
scanf("%d%d%d",&a,&b,&c);

if(a<=b && a<=c);
min=a;
if(b<=a && b<=c)
min=b;
if(c<=a && c<=a)
min=c;
printf("The minimum number among entered numbers %d \n",min);
return 0;

}

