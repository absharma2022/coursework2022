// C program to print the value and address of elements of an array using pointer notation
#include<stdio.h>
#include<math.h>
int main()
{
    int ar[5],i;
    printf("Please enter 5 integer values\n");
    for(i=0;i<5;i++)
    scanf("%d",(ar+i));
    printf("The value and address of elements of an array using pointer notation\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Adress of ar[%d] = %u and the value of ar[%d] = %d \n",i,(ar+i),i,*(ar+i));
    }
    printf("\n");
   return 0; 
}