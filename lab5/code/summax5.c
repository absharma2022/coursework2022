// This is the c code to sum the user entered numbers until 5numbers are added and ignoring negative numbers

#include<stdio.h>
#include<math.h>

int main()
{

float n,sum=0, count=0,i=1;
printf("Please enter the number \n");
do
{
   scanf("%f",&n);
    if(n>=0)
        {sum=sum+n;
        count++;
        }
    else
    continue;
    if(count==5)
    {printf("Five numbers have been added so loop is terminated accodring to problem \n");
    break;
    }
} while(i>0);

printf("The sum of numbers is = %f \n",sum);

return 0;

}
