// a C program that takes a number and prints all prime numbers upto that number
#include<stdio.h>
#include<math.h>
int main()
{
    int j,i,n,rem,flag;
    printf("Please enter the number \n");
    scanf("%d",&n);
    printf("The prime numbers between 1 to n are:");
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d\t",i);
    }

    return 0;
}