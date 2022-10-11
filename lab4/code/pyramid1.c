// C programs to print given pyramid 
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n=1,rows;
    printf("Enter number of rows in pyramids = ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
        
    }
    
    return 0;

}