#include <stdio.h>
struct student {
    char Name[50];
    char University[50];
    int Age;
    struct DOB
    {
        int dd;
        int mm;
        int yy;
    } dob;
} s[100];

int main() {
    int i, n=100;
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i) {
        printf("\n...For student %d...", i+1);
        printf("\nEnter Name: ");
        scanf("%s", s[i].Name);
        printf("Enter Age: ");
        scanf("%d", &s[i].Age);
        printf("Enter University: ");
        scanf("%s", s[i].University);
        printf("Enter Date of Birth(dd/mm/yy):\n ");
        scanf("%d", &s[i].dob.dd);
        scanf("%d", &s[i].dob.mm);
        scanf("%d", &s[i].dob.yy); 
    }

    printf("\n\nDisplaying Information:\n\n");
    printf(".......Records of KU students.......");
    for (i = 0; i < n; ++i) 
    {
          printf("\n-> For student %d", i+1);
          printf("\nName: %s", s[i].Name);
          printf("\nAge: %d", s[i].Age);
          printf("\nUniversity: %s", s[i].University);
          printf("\nDOB: %d/%d/%d", s[i].dob.dd,s[i].dob.mm,s[i].dob.yy);
          printf("\n");
    }
    return 0;
}