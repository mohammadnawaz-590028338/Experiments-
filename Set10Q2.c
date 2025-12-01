#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

void printNumbers(int count, ...) {
    va_list args;
    va_start(args, count);

    printf("Numbers:");
    for (int i = 0; i < count; i++) {
        printf(" %d", va_arg(args, int));
    }

    va_end(args);
}

int main() {

    // stdio.h
    printf("Hello from stdio.h!\n");

    // ctype.h
    char c = 'a';
    printf("Uppercase: %c\n", toupper(c));

    // stdlib.h
    int *ptr = malloc(sizeof(int));
    assert(ptr != NULL);
    *ptr = 50;
    printf("Value using malloc: %d\n", *ptr);
    free(ptr);

    // time.h
    printf("Current time: %ld\n", time(NULL));

    // math.h
    printf("Square root of 25: %.2f\n", sqrt(25));

    // string.h
    char str1[] = "Hello";
    char str2[] = "World";
    printf("Concatenation: %s\n", strcat(str1, str2));

    // stdarg.h
    printNumbers(3, 10, 20, 30);

    return 0;
}
