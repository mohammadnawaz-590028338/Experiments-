Set8Q2
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of integers (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid n\n");
        return 1;
    }

    int *arr = calloc((size_t)n, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "calloc failed\n");
        return 1;
    }

    printf("\nValues immediately after calloc (should be zeros):\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nNow enter %d new values to update the array:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    printf("\nUpdated array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}