Set6Q7
#include <stdio.h>
#include <string.h>

union Address {
    char name[100];
    char home_address[200];
    char hostel_address[200];
    char city[100];
    char state[100];
    char zip[20];
};

int main() {
    union Address A;

    // Store my present address (example)
    strcpy(A.hostel_address, "Room 45, Boys Hostel, College Campus");

    printf("----- Present Address -----\n");
    printf("%s\n", A.hostel_address);
    printf("---------------------------\n");

    return 0;
}