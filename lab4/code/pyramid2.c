// C programs to print given pyramid 
// 1
// 11
// 121
// 1331

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
           if (j==1 || j==i) 
           {
             printf("%d",n);
           }
           else 
            printf("%d",i-1);
            
        }
        printf("\n",n);
    }
    
    return 0;

}