/* Update max and min using call by reference */
#include <stdio.h>

void find_min_max(const int arr[], int n, int *pmin, int *pmax) {
    if (n <= 0) { *pmin = *pmax = 0; return; }
    int mn = arr[0], mx = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }
    *pmin = mn; *pmax = mx;
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int mn, mx;
    find_min_max(a, n, &mn, &mx);
    printf("Min = %d, Max = %d\n", mn, mx);
    return 0;
}
