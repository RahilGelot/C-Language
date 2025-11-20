/* Check leap year */
#include <stdio.h>

int is_leap(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 1;
    return 0;
}

int main(void) {
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year) != 1) return 0;
    printf("%d is %s leap year.\n", year, is_leap(year) ? "a" : "not a");
    return 0;
}
