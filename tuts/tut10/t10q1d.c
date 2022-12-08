#include<stdio.h>
int main() {
int val;
int *pt;
int **point;
val = 55;
pt = &val;
point = &pt;
printf("Value => val: %d\n", val);
printf("Value => *pt: %d\n", *pt );
printf("Value => **pptr: %d\n", **point);
return 0;
}