// This is code to find sum and avg of 5 integers

#include<stdio.h>
#include<math.h>
int main()
{

    int i,n,sum=0;
    float avg;
    printf("Please enter 5 integer numbers \n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=(float)sum/5;
    printf("sum of entered numbers is = %d \n Average of entered numbers is = %f", sum,avg);
    return 0;
 
}