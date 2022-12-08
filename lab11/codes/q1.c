// To generate fibonancci series using recursion

#include<stdio.h>
#include<math.h>

void fibona(int );
void fibona(int n)
{
static int i=0;
static int a=0,b=1,sum=0,j;

if(n>0)
{
if(i==0||i==1)
{printf("%d ",i);
i++;
fibona(n-1);}

else 
{

sum=a+b;
a=b;
b=sum;
printf("%d ",sum);
fibona(n-1);
}
}
}

int main()
{
int n;
printf("Please enter the number of terms in fibonancci series:\n");
scanf("%d",&n);
printf("The fibonancci series is:\n");
fibona(n);
printf("\n");

return 0;
}
