// c code  to print half pyramid of alphabets
// A
// B B
// C C C
// D D D D
// E E E E E

#include<stdio.h>
#include<math.h>
int main()
{
    char ch='A';
    int i,j,n;
    printf("Enter number of rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch++;

    }
    return 0;

}