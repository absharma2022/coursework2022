// c program to input and display a matrix

#include<stdio.h>
#include<math.h>
int main()
{
int rows,cols;
printf("Please enter number of rows and columns of matrix\n");
scanf("%d%d",&rows,&cols);
int i,j,a[rows][cols];
printf("please enter the elements of array \n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
scanf("%d",&a[i][j]);
}
printf("The matrix of size %d X %d is:\n",rows,cols);
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
printf("%d ",a[i][j]);
printf("\n");
}

return 0;
}
