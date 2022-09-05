// this is the c code to find the area and perimeter of a given circle

#include<stdio.h>
#include<math.h>

void main()
{
float r, area, peri,pi=(float)22/7;
printf("Please enter the radius of the circle \n");
scanf("%f",&r);

area = pi*r*r;
peri=2*pi*r;

printf("Area of the circle is = %0.4f \n The perimeter of the circel is = %0.4f \n", area, peri);




}
