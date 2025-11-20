/* Print 1st 10 odd numbers */
#include <stdio.h>
int main() {
    for (int i=1, c=0; c<10; i+=2, c++) printf("%d ", i);
    printf("\n");
    return 0;
}
