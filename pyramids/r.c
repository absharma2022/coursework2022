/*

    1
   123
  12345
 1234567
123456789

*/
#include<stdio.h>
#include<math.h>
int main()
{   
    int n=5,i,j,t;
    for(i=1;i<=n;i++)            /*loop for number of lines*/
        {
            t=1;
            for(j=1;j<=n-i;j++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d",t++);
            for(j=1;j<i;j++)
                printf("%d",t++);
                printf("\n");
        }


    return 0;
}