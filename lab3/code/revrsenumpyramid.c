// this is the code to print the numbers reverse pyramids

#include<stdio.h>
#include<math.h>

int main()
{
int i,j,n;
printf("Enter the number of rows \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

for(j=1;j<=n+1-i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}