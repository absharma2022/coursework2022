// C program to chek weather a number is a pallindrome or not
#include<stdio.h>
#include<math.h>

int main()
{
int n,rem,rev=0,t;
printf("please enter the number\n");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("The entered number is %d\n",t);
printf("The reverse of the entered number is %d\n",rev);
if(rev==t)
printf("So number is a pllindrome\n");
else
printf("So number is not a pallindrome\n");

return 0;

}
