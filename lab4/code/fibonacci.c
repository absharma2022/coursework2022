// This is c code to write first 100 numbers of fibonacci series

#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a=0,b=1,fab;
    printf("first 100 elements of the fionacci series are following: \n");
    printf("%d \t %d \t",a,b);
    for(i=3;i<=100;i++)
    {
        fab=a+b;
        a=b;
        b=fab;
        printf("%d \t",fab);
    }
    return 0;
}