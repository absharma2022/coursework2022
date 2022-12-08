/*

    1
   232
  34543
 4567654
567898765

*/
#include<stdio.h>
#include<math.h>
int main()
{   
    int n=5,i,j,t=1;
    for(i=1;i<=n;i++)            /*loop for number of lines*/
        {
           t=i;
            for(j=1;j<=n-i;j++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d",t++);
                t--;
            for(j=1;j<i;j++)
                printf("%d",--t);
                printf("\n");
        }


    return 0;
}