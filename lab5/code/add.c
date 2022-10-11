// This is the c code to add numbers until user entered zeros

#include<stdio.h>
#include<math.h>

int main()
{
float n,sum=0;
printf("Please enter the number \n");

do
{

scanf("%f",&n);
sum=sum+n;

}
while(n!=0);
printf("Zero is entered by user \n");
printf("The sum of numbers is = %f \n",sum);
return 0;
}
