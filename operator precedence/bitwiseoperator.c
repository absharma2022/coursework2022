// c program to chek result of bitwise operators

#include<stdio.h>
#include<math.h>

int main()
{
short i =0xAB00;
short j= 0xABCD;
short n;

// Bitwise AND operator
n=i&j;

printf("The result of bitwise AND operator is sotred in n and this is: %d\n",n);

// Bitwise OR operator
n=n|j;
printf("The result of bitwise OR operator is stored in n and this result is: %d\n",n);


// Bitwise exclusive OR (XOR) operator
n=i^j;
printf("The result of bitwise inclusive OR operator is stored in n and this is: %d",n);

return 0;


}