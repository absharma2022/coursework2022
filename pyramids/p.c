/*
    *
   ***
  *****
 *******
*********
*/

#include<stdio.h>
#include<math.h>
int main()
{   
    int n=5,i,j;
    for(i=1;i<=n;i++)            /*loop for number of lines*/
        {
            for(j=1;j<=n-i;j++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("*");
            for(j=1;j<i;j++)
                printf("*");
                printf("\n");
        }


    return 0;
}