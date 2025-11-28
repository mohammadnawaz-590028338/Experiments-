Set7Q1
#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.5;
    char c = 'A';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("Values of Variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    printf("\nValues using Pointers:\n");
    printf("*ip = %d\n", *ip);
    printf("*fp = %.2f\n", *fp);
    printf("*cp = %c\n", *cp);

    printf("\nAddresses stored in pointers:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    return 0;
}