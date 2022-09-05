//This the code to see what kind of triangle is by looking at side of trianlge
#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c;
 printf("Etner the all three sides \n");
 scanf("%f%f%f",&a,&b,&c);
 if(a==b && b==c)
 printf("The triangle is equilateral triangle");
 else if(a==b || b==c || a==c)
 printf("The triangle is isoceles triangle");
 else 
 printf("The triangle is scalene triangle");

 

}
