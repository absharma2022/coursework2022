// This is c program to understnad about function declaration
#include<stdio.h>
#include<math.h>
float sum(int, int);
int main()
{
    int a=2,b=3;
    printf("Sum of a and b is = %f\n",sum(a,b));
    return 0;
}
float sum(int n, int m)
{
    return(n+m);
}