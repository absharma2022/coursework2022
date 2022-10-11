// C program to check whether a number is a pallindrome number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,rem,new_n=0,t;
    printf("Please enter the number \n");
    scanf("%d",&n);
    t=n;
    for(i=1;i>0;i++)
    {
        rem=n%10;
        n=n/10;
        new_n=new_n*10+rem;
        if(n==0)
        break;
    }
    if (new_n==t)
    printf("number is pallindrome  and number is %d  \n",new_n);
    else
    printf("Number is not pallindrome and number is %d \n",new_n);

    return 0;
}