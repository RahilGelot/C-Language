/* Example nested loops printing pairs in rows */
#include <stdio.h>
int main() {
    /* Example: print pairs (1 1), (1 2), (1 3) in rows */
    for (int i=1;i<=2;i++) {
        for (int j=1;j<=3;j++) printf("%d %d\t", i, j);
        printf("\n");
    }
    return 0;
}
