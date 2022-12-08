// dynamically allocate 1-D and 2-D array

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
//// for 1 D/////
int *p,size,i;
printf("Please enter the size of array:\n");
scanf("%d",&size);
p=(int *)malloc(size*sizeof(int));
if(p==NULL)
printf("No sufficient memory available");
printf("Please enter integer values of 1D array\n");
for(i=0;i<size;i++)
scanf("%d",(p+i));
printf("The array elements are\n");
for(i=0;i<size;i++)
printf("%d ",*(p+i));
printf("\n");


//********************************************////
/// for 2D array/////


int rows=3,cols=2,n,j;

//printf("Please enter the rows of array:\n");
//scanf("%d",&rows);
//printf("Please enter the cols of array:\n");
//scanf("%d",&cols);
int *q[3];
for(i=0;i<3;i++)
q[i]=(int *)malloc(cols*sizeof(int));
if(q==NULL)
printf("No sufficient memory available");
printf("Please enter integer values of 2D array\n");
for(i=0;i<3;i++)
{
for(j=0;j<cols;j++)
scanf("%d",&q[i][j]);
}
printf("The array elements are\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
printf("%d ",q[i][j]);
printf("\n");
}
printf("\n");

return 0;

}
