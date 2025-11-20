/* Check palindrome number */
#include <stdio.h>
int main() {
    long n; printf("Enter integer: "); if (scanf("%ld",&n)!=1) return 0;
    long orig = n; long tmp = n; if (tmp<0) tmp = -tmp;
    long rev = 0;
    while (tmp) { rev = rev*10 + (tmp%10); tmp /= 10; }
    if (orig < 0) rev = -rev;
    if (orig == rev) printf("%ld is a palindrome\n", orig);
    else printf("%ld is not a palindrome\n", orig);
    return 0;
}
