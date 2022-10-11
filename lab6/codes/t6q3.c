// C program to change value of elements

#include<stdio.h>
#include<math.h>
int main()
{
int arr[]={1,2,3,4,5,6},i,size;
size=sizeof(arr)/sizeof(arr[0]);
printf("The present array is \n");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
printf("\nUpdate the value of elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Elements of new array are:\n");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
return 0;
}
