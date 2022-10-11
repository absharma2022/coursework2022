// C program to sort array elements in ascending order
#include<stdio.h>
#include<math.h>

int main()
{
int i,j,size=5, arr[size],temp;
printf("please enter the array elements:\n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
printf("The array elements are :\n");
for(i=0;i<size;i++)
printf("%d ",arr[i]);


for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;   
}
}
}
printf("\nThe array elements in asending order are :\n");
for(i=0;i<size;i++)
printf("%d ",arr[i]);
return 0;
}
