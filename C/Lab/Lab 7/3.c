#include <stdio.h>

struct Student {
    char name[30];
    int marks;
    char grade;
};

int main() {
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    getchar(); // Clear the newline character from the previous scanf

    struct Student student[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the information of Student %d\n", i + 1);
        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("Mark: ");
        scanf("%d", &student[i].marks);
        getchar(); // Clear the newline character from the previous scanf

        if (student[i].marks >= 80 && student[i].marks <= 100)
            student[i].grade = 'A';
        else if (student[i].marks >= 70 && student[i].marks <= 79)
            student[i].grade = 'B';
        else if (student[i].marks >= 60 && student[i].marks <= 69)
            student[i].grade = 'C';
        else if (student[i].marks >= 50 && student[i].marks <= 59)
            student[i].grade = 'D';
        else if (student[i].marks >= 40 && student[i].marks <= 49)
            student[i].grade = 'E';
        else if (student[i].marks <= 40)
            student[i].grade = 'F';
    }

    for (i = 0; i < n; i++) {
        printf("\n\nStudent %d\n", i + 1); // Added the missing format specifier for student number
        printf("Name: %s\n", student[i].name);
        printf("Mark: %d\n", student[i].marks);
        printf("Grade: %c\n", student[i].grade);
    }
    return 0;
}
