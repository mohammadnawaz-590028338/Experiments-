Set6Q4
#include <stdio.h>

struct employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    struct employee e[100];   // array to store up to 100 employees
    int n, i;
    float sum = 0, avg;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Reading employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);   // reads single-word name

        printf("Address: ");
        scanf("%s", e[i].address); // reads single-word address

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        sum += e[i].salary;
    }

    // Calculating average salary
    avg = sum / n;

    printf("\n------------------------------\n");
    printf("Average Salary of %d Employees = %.2f\n", n, avg);
    printf("------------------------------\n");

    return 0;
}