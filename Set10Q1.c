#include <stdio.h>

#define ADD(a,b) ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((b!=0)?((a)/(b)):-1)

int main() {
    int a = 20, b = 10;

    printf("Addition: %d\n", ADD(a,b));
    printf("Subtraction: %d\n", SUB(a,b));
    printf("Multiplication: %d\n", MUL(a,b));
    printf("Division: %d\n", DIV(a,b));

    return 0;
}
