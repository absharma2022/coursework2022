// this is c program to test pointer arithematic 
#include<stdio.h>
#include<math.h>

int main()
{
    int a[]={20,30,105,82,97,72,66,102};
    float b[]={20,30,105,82,97,72,66,102};
    int *p,*p1;
    float *p2;
    p=&a[1];p1=&a[6];p2=&b[5];
    printf("%d\n",*p1-*p);
    printf("%x %x %d\n",p1,p,p1-p);
    printf("%p\n",p2);

    return 0;

}