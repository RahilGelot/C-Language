/* Swap by value */
#include <stdio.h>

void swap_by_value(int a, int b) {
    int tmp = a; a = b; b = tmp;
    printf("Inside swap_by_value: a=%d b=%d (changed only inside function)\n", a, b);
}

int main(void) {
    int x = 10, y = 20;
    printf("Before: x=%d y=%d\n", x, y);
    swap_by_value(x, y);
    printf("After:  x=%d y=%d (still original values)\n", x, y);
    return 0;
}
