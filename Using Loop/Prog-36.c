/* Example parallel columns */
#include <stdio.h>
int main() {
    int rows = 4;
    for (int i=1;i<=rows;i++) {
        printf("%d 5\t", i);
        printf("%d 5\n", i);
    }
    return 0;
}
