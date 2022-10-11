// C program to accept any six digit number and print the sum of all even digits of all
// even digits of that number and multiplication of all odd digits
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,rem,sum=0,mul=1;
    printf("Please enter an integer number of 6 digits \n");
    scanf("%d",&n);
    rem=1;
    i=0;
    while(n>=0)
    {
        rem=n%10;
        n=n/10;
        i++;
        if(i%2==0)
        {
            sum=sum+rem;
        }
        else
        {
            mul=mul*rem;
        }
        if(n==0)
        break;

    }
    printf("number of digits in the entered number are = %d\n",i);
    printf("sum of even digits are = %d\n",sum);
    printf("multiplication of odd digits are = %d\n",mul);
    printf("%d",n);

    return 0;

}