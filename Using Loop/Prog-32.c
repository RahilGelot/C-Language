/* Count primes between 1 and 500 */
#include <stdio.h>
#include <math.h>
int main() {
    int count = 0;
    for (int n=2; n<=500; n++) {
        int isPrime = 1;
        for (int i=2; i<= (int)sqrt(n); i++) if (n % i == 0) { isPrime=0; break; }
        if (isPrime) count++;
    }
    printf("Number of primes between 1 and 500 = %d\n", count);
    return 0;
}
