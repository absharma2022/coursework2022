//  Write a C program to find out the largest and smallest of three numbers using 
// conditional operator which is also known as ternary operator
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,n3,max_i,max_f;
    printf("Please enter three integer numbers \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    max_i=(n1>n2)? n1:n2;
    max_f=(n3>max_i)? n3:max_i;
    printf("The maximum among three is = %d",max_f);

    return 0;
}