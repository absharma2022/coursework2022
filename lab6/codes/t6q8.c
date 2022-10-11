// c program to separate odd and even integers in separate array


#include<stdio.h>
#include<math.h>
int main()
{
int i,j=0,k=0,size,sizeeven,sizeodd;
printf("Enter the size of array: \n");
scanf("%d",&size);
int ar[size],areven[size],arodd[size];

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
{
if(ar[i]%2==0)
{
areven[j]=ar[i];
j++;
}
else
{
arodd[k]=ar[i];
k++;
}
}
sizeeven=sizeof(areven)/sizeof(areven[0]);
sizeodd=sizeof(arodd)/sizeof(arodd[0]);
printf("\nThe size of array of even elements is: %d\n",sizeeven);
printf("Elements of array which contains even elements are \n");
for(i=0;i<j;i++)
printf("%d ",areven[i]);
printf("\nThe size of array of odd elements is: %d\n",sizeodd);
printf("Elements of array which contains odd elements are \n");
for(i=0;i<k;i++)
printf("%d ",arodd[i]);
return 0;
}
