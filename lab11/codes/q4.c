// Retruning more than one value from function

#include<stdio.h>
#include<math.h>
void sum_mul(int, int,int,int*,int*);
void sum_mul(int a,int b,int c,int *sum,int *mul)
{
    *sum=a+b+c;
    *mul=a*b*c;
}
int main()
{
    int a,b,c,sum,mul;
    printf("Please enter integer values of a, b and c =\n");
    scanf("%d%d%d",&a,&b,&c);
    sum_mul(a,b,c,&sum,&mul);
    printf("Sum of entered numbers are : %d\n Multiplication of numbers are: %d",sum,mul);
    return 0;

}