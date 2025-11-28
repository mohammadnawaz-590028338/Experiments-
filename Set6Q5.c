Set6Q5
#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    struct employee e[5], temp;
    int i, j;

    // Input for 5 employees
    printf("Enter details of 5 Employees:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Address: ");
        scanf("%s", e[i].address);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Sorting based on name in alphabetical order
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // Display sorted employee information
    printf("\n---- Employee Details in Alphabetical Order ----\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s\tAddress: %s\tSalary: %.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}