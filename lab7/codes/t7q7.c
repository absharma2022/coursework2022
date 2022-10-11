// c program for multiplication of two matricies
#include<stdio.h>
#include<math.h>
int main()
{
int rows1,cols1,rows2,cols2;
printf("Please enter number of rows and columns of  first matrix\n");
scanf("%d%d",&rows1,&cols1);
printf("Please enter number of rows and columns of  second matrix\n");
scanf("%d%d",&rows2,&cols2);
int i,k,j,l,m,m1[rows1][cols1],m2[rows2][cols2],mul[rows1][cols2],sum;
if(cols1==rows2)
{
printf("Number of columns of first matrix is equal to number of rows of second matrix so multiplication is possible\n Please go ahead");
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
printf("The multiplication of above two matricies is:\n ");


for(i=0;i<rows1;i++)
{
for(j=0;j<cols2;j++)
{ sum=0;
for(k=0;k<cols1;k++)
sum=sum+m1[i][k]*m2[k][j];
mul[i][j]=sum;
printf("%d ",mul[i][j]);
}
printf("\n");
}



}
else
{printf("Number of columns of first matrix is not equal to number of rows of second matrix so multiplication is not possible\nCan not go ahead");}

return 0;
}


