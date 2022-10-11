// c code to print element and also to print adress of each element

#include<stdio.h>
#include<math.h>
int main()
{
int i,size;
int ar[]={1,2,3,4,5,6,7,8,9,10};
size=sizeof(ar)/sizeof(ar[0]);
printf("Number of elements in array is: %d\n",size);
printf("The element and adress of each element is:\n");
for(i=0;i<size;i++)
printf("arr(%d) = %d and adress = %p\n",i,ar[i],&ar[i]);
return 0;
}
