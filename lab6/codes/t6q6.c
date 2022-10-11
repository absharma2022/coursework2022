// c program to copy the elementd of one array into another array
#include<stdio.h>
#include<math.h>
int main()
{
int i,size;
printf("Enter the size of array: \n");
scanf("%d",&size);
int ar[size],ar1[size];

printf(" Please enter elements of array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
printf("Entered elements of array are:\n");
for(i=0;i<size;i++)
{
printf("%d ",ar[i]);
}
for(i=0;i<size;i++)
ar1[i]=ar[i];
printf("\n The elements of ar1 are:\n");
for(i=0;i<size;i++)
printf("%d ",ar1[i]);
return 0;
}
