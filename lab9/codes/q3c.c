// c function display the entered number is prime or not 

#include<stdio.h>
#include<math.h>
int prime(int );
int prime(int a)
{
    int i=2,t=0;
    while(i<a)
    {
       if (a%i==0)
       {t=1;
       break;}
        i=i+1;
    }
   return(t);
}
int main()
{
    int num;
    printf("Please enter the integer number : \n");
    scanf("%d",&num);

    if (prime(num)==1)
    printf("%d is not prime number \n",num);
    else
    printf("%d is prime number\n",num);
    return 0;
}