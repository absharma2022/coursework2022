// C code to find out the LCM and HCF of two numbers

#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,l,h,t1,t2,t;
    printf("Please enter two numbers:\n");
    scanf("%d%d",&n,&m);
    n=t1;
    m=t2;
    printf("numbers are %d %d \n",n,m);
    while (m != 0){
        t = m;
        m = n % m;
        n = t;
        printf(" %d \n",m);}
    h=n;
    l=(t1*t2)/h;
    printf("The hcf of entered numbers is %d \n The lcm of entered numbers is %d \n",h,l);
    return 0;
}