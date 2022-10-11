// c code to read n numbers of values in an array and display it in reverse order

#include<stdio.h>
#include<math.h>

int main()
{
int n;
printf("Enter size of array\n");
scanf("%d",&n);
int arr[n],i;
printf("Enter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Elements of array are:\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("elements of array in reverse order are:\n");
for(i=n-1;i>=0;i--)
printf("%d ",arr[i]);
return 0;
}

