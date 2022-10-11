// c program to find average of n numbers using arrays


#include<stdio.h>
#include<math.h>
int main()
{
int i,size,sum=0;
float avg;
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
for(i=0;i<size;i++)
sum=sum+ar[i];
avg=(float)sum/size;
printf("\naverage of elements is %f\n",avg);
return 0;
}
