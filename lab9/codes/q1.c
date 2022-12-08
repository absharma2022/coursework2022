// C program to count the occurrences of a number in a matrix
#include<stdio.h>
#include<math.h>
int main()
{
    int ar[3][3],i,j,n,count=0;
    printf("Please enter integer values of ar \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&ar[i][j]);
    }
     printf("The values of ar  are \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",ar[i][j]);
        printf("\n");
    }
    printf("Please enter the number for which we want to find occurence in matrix\n");
    scanf("%d",&n);

    // To check occurence of the number n
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(n==ar[i][j])
            count++;
        }
    }
    printf("The occurenec of %d is = %d",n,count);

    return 0;

}
