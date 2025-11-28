Set8Q3
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter initial size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    int newn;
    printf("Enter new total size after realloc (must be > %d): ", n);
    if (scanf("%d", &newn) != 1 || newn <= n) {
        fprintf(stderr, "Invalid new size\n");
        free(arr);
        return 1;
    }

    int *tmp = realloc(arr, (size_t)newn * sizeof(int));
    if (tmp == NULL) {
        fprintf(stderr, "realloc failed\n");
        free(arr); // arr is still valid if realloc failed
        return 1;
    }
    arr = tmp;

    printf("Enter %d new elements to fill extended part:\n", newn - n);
    for (int i = n; i < newn; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    printf("\nAll elements after realloc:\n");
    for (int i = 0; i < newn; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}