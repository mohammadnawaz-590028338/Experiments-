Set8Q1
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    long long sum = 0;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }

    printf("\nSum = %lld\nMax = %d\nMin = %d\n", sum, mx, mn);

    free(arr);
    return 0;
}