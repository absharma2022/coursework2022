// c program to count the even and odd numbers in array

#include<stdio.h>
#include<math.h>
int main()
{
int i, size=10,a[size],even=0,odd=0;
printf("please enter the elements of array \n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
even++;
else
odd++;
}
printf("The entered array is \n");
for(i=0;i<size;i++)
printf("%d ",a[i]);
printf("\nTotal entered even numbers in array is %d \n",even);
printf("Total entered odd numbers in array is %d \n",odd);
return 0;
}
