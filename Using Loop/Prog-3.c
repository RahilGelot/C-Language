/* Print 1st 10 even numbers */
#include <stdio.h>
int main() {
    for (int i=2, c=0; c<10; i+=2, c++) printf("%d ", i);
    printf("\n");
    return 0;
}
