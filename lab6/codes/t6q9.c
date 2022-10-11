// c program to print square of array elements


#include<stdio.h>
#include<math.h>
int main()
{
int i,size;
printf("Enter the size of array: \n");
scanf("%d",&size);
int ar[size];

printf("Please enter elements of array:\n");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
printf("Entered elements of array are:\n");
for(i=0;i<size;i++)
{
printf("%d ",ar[i]);
}
printf("Square of elements of array are:\n");
for(i=0;i<size;i++)
{
ar[i]=ar[i]*ar[i];
printf("%d ",ar[i]);
}
return 0;
}
