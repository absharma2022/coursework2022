// c function to display the sum and average of three entered numbers
// In this function we can retrun two values using pointer
#include<stdio.h>
#include<math.h>
void sumandavg(float, float, float, float *,float *);
int main()
{
    float n1,n2,n3,sum,avg;
    printf("Please enter three numbers:\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    sumandavg(n1,n2,n3,&sum,&avg);

    printf("The sum and and average of entered numbers are %f and %f respectively\n",sum,avg);
    return 0;
}
void sumandavg(float a, float b, float c, float *sum,float *avg)
{
    *sum=a+b+c;
    *avg=*sum/3;

}