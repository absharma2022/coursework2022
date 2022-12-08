// c function to print Pascal’s triangle

#include<stdio.h>
#include<math.h>
int factorial(int );
int factorial(int n)
{
    int i, fact=1;
    for(i=n;i>=1;i--)
    fact=fact*i;
    return fact;

}
int ncr(int, int);
int ncr(int n, int r)
{
     return(factorial(n)/(factorial(r)*factorial(n-r)));
}

void pascal(int );
void pascal( int n)
{
    int i,j,p;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        printf(" ");
        for(j=0;j<=i;j++)
        printf(" %1d",ncr(i,j));
      
       printf("\n");
    }
}

int main()
{
    int rows;
    printf("Please enter number of rows in the pascal triangle\n");
    scanf("%d",&rows);
    pascal(rows);

    return 0;
}