// c code for That takes a positive integer from the user and displays all the positive factors of that number
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,rem;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The factors of entered number are: ");
    for(i=1;i<=n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
             //n=n/i;
            printf("%d ",i);
        }

    }
    return 0;

}