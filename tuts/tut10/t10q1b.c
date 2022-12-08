#include <stdio.h>
int main() {
int value_array[] = {141, 1032};
int *point;
int max=2;
point = &value_array[max-1];
for (int a = max; a > 0; a--) {
printf("Value of value_array[%d] = %d\n", a-1, *point);
printf("Address of value_array[%d] = %p\n", a-1, point);
point--;
}
return 0;
}