#include<stdio.h>
int main()
{
    int x[4][4]={{1,2},{3},{4,0,5},{7,9,8,6}};
    int *ptr1,*ptr2;
    ptr1=&x[3][2];
    ptr2=&x[2][3];
    printf("*ptr1 = %d\n",*ptr1);
    printf("*(ptr1-2) = %d\n",*(ptr1-2));
    printf("*(ptr2-4) = %d\n",*(ptr2-4));
    printf("Differencel = %d\n",*ptr1-*ptr2);
    printf("Differece2 = %d\n",ptr1-ptr2);
    if(ptr1==(ptr2+3))
    printf("same\n");
    else
    printf("Not same\n");

    return 0;
}