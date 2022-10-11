// c program to find the maximum and minimum elements in array using conditional operator


#include<stdio.h>
#include<math.h>
int main()
{
int i,size,max, min,t1,t2;
printf("Enter the size of array: \n");
scanf("%d",&size);
int ar[size];

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
for(i=0;i<size-1;i++)
{
t1=(ar[i]>ar[i+1])?ar[i]:ar[i+1];
if(i==0)
max=t1;
t2=(ar[i]<ar[i+1])?ar[i]:ar[i+1];
if(i==0)
min=t2;
if(i>0)
{
if(t1>=max)
max=t1;
if(t2<=min)
min=t2;
}

}
printf("\nThe maximum value is %d\nThe minimum value is %d\n",max,min);

return 0;
}
