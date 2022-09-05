// this is the c code to find type of triangle based on sides of triangles

#include<stdio.h>
#include<math.h>

int main()
{
float a1 ,a2,a3;
printf("Please enter the side of triangle \n");
scanf("%f%f%f",&a1,&a2,&a3);
 if(a1==a2 && a1==a3)
printf("The triangle is equitlateral triangle \n");
else if(a1==a2 || a1==a3 || a2==a3)
printf("The triangle is isosceles triangle\n");
else
printf("The triangle is  scalne triangle \n");

return 0;
}
