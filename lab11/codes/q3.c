// Write a program to find out the roots of quadratic equation ax2 + bx+c=0 using function

// C program to find roots of
// a quadratic equation
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Prints roots of quadratic
// equation ax*2 + bx + x
void findRoots(int a, int b, int c)
{
	// If a is 0, then equation is
	// not quadratic, but linear
	if (a == 0)
	{
		printf("Invalid");
		return;
	}

	int d = b * b - 4 * a * c;
	double sqrt_val = sqrt(abs(d));

	if (d > 0)
	{
		printf("Roots are real and different ");
		printf("%f %f",
			(double)(-b + sqrt_val) /
					(2 * a),
			(double)(-b - sqrt_val) /
					(2 * a));
	}
	else if (d == 0)
	{
		printf("Roots are real and same ");
		printf("%f",
				-(double)b / (2 * a));
	}
	else // d < 0
	{
		printf("Roots are complex ");
		printf("%f + i%f %f - i%f",
			-(double)b / (2 * a),
			sqrt_val/(2 * a),
			-(double)b / (2 * a),
			sqrt_val/(2 * a));
	}
}

// Driver code
int main()
{
	int a = 1, b = -7, c = 12;
	
	// Function call
	findRoots(a, b, c);
	return 0;
}
