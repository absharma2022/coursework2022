// C programming for Area of circle and perimeter 

#include<stdio.h>
#include<math.h>
//double pi=22/7;
void main()
{
double r, area, peri,pi=3.14;
printf("Please enter the radius of circle \n");
scanf("%lf",&r);
area=pi*r*r;
peri=2*pi*r;
printf("Area of the circle is = %lf \n Primeter of the circle is = %lf",area,peri);
}