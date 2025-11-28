SET6Q3
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char fname[30];
    char lname[30];
};

int main() {
    struct student s[5], temp;
    int i, j;

    // Input details of 5 students
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter First Name: ");
        scanf("%s", s[i].fname);
        printf("Enter Last Name: ");
        scanf("%s", s[i].lname);
    }

    // Sorting based on roll_no (ascending order)
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].roll_no > s[j].roll_no) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Display sorted records
    printf("\n--- Student Records in Ascending Order (by Roll No) ---\n");
    for(i = 0; i < 5; i++) {
        printf("Roll No: %d\tName: %s %s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
