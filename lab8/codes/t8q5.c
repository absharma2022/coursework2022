// C program to check whether the elements of an array are distinct

#include<stdio.h>
#include<math.h>

int main()
{
int i,j,size=5, arr[size],flag=0;
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

if(arr[i]==arr[j])
{
flag=1;
break;}
}
if(flag==1)
break;
}

if(flag==0)
printf("\nArray elements are distinct\n");
else
printf("\nArray elements are not distinct \n");

return 0;

}
