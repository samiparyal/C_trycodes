
#include <stdio.h>
struct student {
    char Name[50];
    char Address[50];
    int Age;
    float salary;
} s[100];

int main() {
    int i, n;
    printf("Enter number of students(<100):\n");
    scanf("%d", &n);
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i) {
        printf("\n...For student %d...", i+1);
        printf("\nEnter Name: ");
        scanf("%s", s[i].Name);
        printf("Enter Age: ");
        scanf("%d", &s[i].Age);
        printf("Enter Address: ");
        scanf("%s", s[i].Address);
        printf("Enter salary: ");
        scanf("%f", &s[i].salary);
    }
    printf("\n\nDisplaying Information:\n\n");
    for (i = 0; i < n; ++i) {
        printf("\n...For student %d...", i+1);
        printf("\nName: %s", s[i].Name);
        printf("\nAge: %d", s[i].Age);
        printf("\nAddress: %s", s[i].Address);
        printf("\nsalary: %.1f", s[i].salary);
        printf("\n");
    }
    return 0;
}