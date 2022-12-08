/*

    5
   545
  54345
 5432345
543212345

*/

#include<stdio.h>
#include<math.h>
int main()
{   
    int n=5,i,j,t=1;
    for(i=1;i<=n;i++)            /*loop for number of lines*/
        {
           t=5;
            for(j=1;j<=n-i;j++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d",t--);
                t=t+2;
            for(j=1;j<i;j++)
                printf("%d",t++);
                printf("\n");
        }


    return 0;
}