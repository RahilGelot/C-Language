/* Check divisibility by 7 */
#include <stdio.h>
void main() {
    long n;
    printf("Enter an integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    if (n % 7 == 0) printf("%ld is divisible by 7\n", n);
    else printf("%ld is not divisible by 7\n", n);
    return ;
}
