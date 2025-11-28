Set6Q6
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[50];
    int id;
    float salary;
    struct date dob;   // Structure inside structure
};

int main() {
    struct employee e;

    // ---- Input ----
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // ---- Output ----
    printf("\n------ Employee Details ------\n");
    printf("Name          : %s\n", e.name);
    printf("ID            : %d\n", e.id);
    printf("Date of Birth : %02d-%02d-%04d\n", e.dob.day, e.dob.month, e.dob.year);
    printf("Salary        : %.2f\n", e.salary);

    return 0;
}