Set7Q3
#include <stdio.h>

void modify(int *x, float *y, char *z) {
    *x += 5;     // adding 5
    *y *= 2;     // doubling
    *z = 'Z';    // change character
}

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    modify(&a, &b, &c);

    printf("\nAfter function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}