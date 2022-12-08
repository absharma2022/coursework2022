
#include<stdio.h>

int main() 
{
int value_array[2]={141,1};
int *point;
point=value_array;
for (int a=0;a<2;a++) 
{
printf("Value of value_array[%d] = %d\n",a,*point);
printf("Address of value_array[%d] = %p\n",a,point);
point++;
}
return 0;
}