Set7Q2
#include <stdio.h>

int main() {
    int a = 10, *ip = &a;
    float b = 25.5, *fp = &b;
    char c = 'A', *cp = &c;

    printf("Original Addresses:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    ip++; fp++; cp++; // increment pointers

    printf("\nAfter Incrementing:\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    ip--; fp--; cp--; // decrement pointers

    printf("\nAfter Decrementing (Back to Original):\n");
    printf("ip = %p\n", ip);
    printf("fp = %p\n", fp);
    printf("cp = %p\n", cp);

    return 0;
}