// 2D string
#include<stdio.h>
#include<math.h>
int main()
{
    char str[5][20];
    int i;
    printf("Please enter the string:\n");
    for(i=0;i<5;i++)
    scanf("%s",str[i]); // only will work for single word means without whitespace
    printf("The strings are \n");
    for(i=0;i<5;i++)
    printf("%s ",str[i]);
    printf("\n");
    return 0;
}