// c function display the entered number in reverse order

#include<stdio.h>
#include<math.h>
int reverse(int );
int reverse(int a)
{
    int rem,rev=0;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        rev=rev*10+rem;
    }
    return rev;
}
int main()
{
    int num;
    printf("Please enter the integer number : \n");
    scanf("%d",&num);
    printf("The reverse of the entered integer number is : %d",reverse(num));
    return 0;
}