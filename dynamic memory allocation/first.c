// Program to understand dynamic ailocation of memory 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("Please enter number of numbers to be entered:\n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
    printf("Not enough memory");
    return 1;
    }
    printf("\nPlease enter %d integer numbers \n",n);
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    printf("The entered numbers are:\n");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));


    return 0;

}