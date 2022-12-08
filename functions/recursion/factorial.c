// This is c function to find a factorialof a function using recursion
#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
    int num;
    printf("Please enter the integer number:\n");
    scanf("%d",&num);
    printf("Factorial of %d is = %d\n",num,fact(num));

    return 0;
}
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return(n*fact(n-1));
}