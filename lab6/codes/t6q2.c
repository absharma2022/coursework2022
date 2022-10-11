// c code to count total number of any array elements

#include<stdio.h>
#include<math.h>
int main()
{
int size;
int ar[]={1,2,3,4,5,6,7,8,9,10};
size=sizeof(ar)/sizeof(ar[0]);
printf("Number of elements in array is: %d\n",size);
return 0;
}
