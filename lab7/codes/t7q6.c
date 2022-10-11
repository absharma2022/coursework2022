// c program to addition of two matricies

#include<stdio.h>
#include<math.h>
int main()
{
int rows1,cols1,rows2,cols2;
printf("Please enter number of rows and columns of  first matrix\n");
scanf("%d%d",&rows1,&cols1);
printf("Please enter number of rows and columns of  second matrix\n");
scanf("%d%d",&rows2,&cols2);
int i,j,m1[rows1][cols1],m2[rows2][cols2],sum[rows1][cols1];
printf("please enter the elements of first matrix \n");
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
scanf("%d",&m1[i][j]);
}
printf("please enter the elements of second matrix \n");
for(i=0;i<rows2;i++)
{
for(j=0;j<cols2;j++)
scanf("%d",&m2[i][j]);
}

printf("The first matrix of size %d X %d is;\n",rows1,cols1);
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
printf("%d ",m1[i][j]);
printf("\n");
}
printf("The second matrix of size %d X %d is;\n",rows2,cols2);
for(i=0;i<rows2;i++)
{
for(j=0;j<cols2;j++)
printf("%d ",m2[i][j]);
printf("\n");
}
if(rows1==rows2 && cols1==cols2)
{ printf("Both matricies have same dimensions or size so addition is possible and addtion of matricies is:\n ");

for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
{
sum[i][j]=m1[i][j]+m2[i][j];
printf("%d ",sum[i][j]);
}
printf("\n");
}
}
else 
 printf("Both matricies dont have same dimensions or size so addition is not possible\n ");

return 0;
}
