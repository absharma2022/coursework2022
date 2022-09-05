// this is c code to find factorial of a given number

#include<stdio.h>
#include<math.h>

int main()
{
int n,i,fact=1;
printf("Please enter an integer number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of a given number is = %d\n", fact);

return 0;

}
