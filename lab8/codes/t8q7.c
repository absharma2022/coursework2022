// C program to find out whether matrix is symmetric or not
#include<stdio.h>
#include<math.h>

int main()
{
int rows,cols;
printf(" Please enter the number of rwos and columns of the matrix:\n");
scanf("%d%d",&rows,&cols);
if(rows!=cols)
printf("The matrix is not a square matrix so cant be symmetric matrix\n");
else
printf("The matrix is square matrix\n");

int i,j,arr[rows][cols],t=0;
printf("please enter the array elements:\n");
for(i=0;i<rows;i++)
{for(j=0;j<cols;j++)
scanf("%d",&arr[i][j]);
}

printf("The array elements are :\n");
for(i=0;i<rows;i++)
{for(j=0;j<cols;j++)
printf("%d ",arr[i][j]);
printf("\n");
}

for(i=0;i<rows;i++)
{
for(j=i+1;j<cols;j++)
{if(arr[i][j]==arr[j][i])
t=1;
}
}

if(t==1)
printf("The matrix is symmetric");
else
printf("The matrix is mot symmetric");
return 0;
}
