// To find the  sum of digits using recursion
#include<stdio.h>
#include<math.h>
int sum_digit(int );
int sum_digit(int n)
{
    int sum=0,rem;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        sum = sum+sum_digit(n);
        return sum;
    }
}
int main()
{
    int n;
    printf("Please enter the integer value = \n");
    scanf("%d",&n);
    printf("The sum of entered digits = %d",sum_digit(n));
    
   return 0;
}