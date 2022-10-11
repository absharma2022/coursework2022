// C program to find sum of all elements of one array of size 5

#include<stdio.h>
#include<math.h>

int main()
{
int arr[5],i,sum=0;
printf("Enter the elements of the array :\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("Elements of array are: \n");
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}
printf("\nSum of array elements is: %d\n",sum);
return 0;
}
