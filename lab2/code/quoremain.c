#include<stdio.h>
#include<math.h>
int main()
{
int a,b,quo,rem;
printf("Enter the dividend and divisor = \n");
scanf("%d%d",&a,&b);
quo=a/b;
rem=a%b;

printf("The quotient and remiander of devidend(%d) and devisior(%d) are respectively %d, %d \n",a,b,quo,rem);
}
