// this is c code to generate the multiplication table of entered number upto given range

#include<stdio.h>
#include<math.h>

int main()
{
int i,n,range,mp=1;
printf("Please enter the range \n");
scanf("%d",&range);
printf("Enter the number \n");
scanf("%d",&n);
printf("Multiplication table of entered number upto given range is : \n");
for(i=1;i<=range;i++)
{
mp=n*i;
printf("%d \n",mp);
}
return 0;
}
