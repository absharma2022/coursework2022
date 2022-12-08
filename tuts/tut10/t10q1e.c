#include<stdio.h>
int * printToscreen()
{
static int val = 2364;
return (&val);
}
int main()
{
int * point;
point = printToscreen();
printf("Address is: %p\n", point);
printf("Value is: %d\n", *point);
return 0;
}