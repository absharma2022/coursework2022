// C program to adding two numbers using recursion.

#include<stdio.h>
main()
{
int x=7, y=8;
printf("%d\n",func(x,y));
}
func(int x, int y)
{
int q=0;
if (x==0)
return y;
else
return func(--x,++y);
}
