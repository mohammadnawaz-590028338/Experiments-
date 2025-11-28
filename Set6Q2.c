Set6Q2
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float mark;
};

int main() {
    struct student s;

    // Input student details
    printf("Enter Student Name: ");
    scanf("%49s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.mark);

    // Output student details
    printf("\n---- Student Details ----\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.mark);

    return 0;
}