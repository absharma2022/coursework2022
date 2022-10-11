// c program to store elements in n array of size 10 and print it

#include<stdio.h>
#include<math.h>
int main()
{
int i,size;
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
printf("\n The adress of array is %p and %p",ar[0],ar[9]);

return 0;

}
