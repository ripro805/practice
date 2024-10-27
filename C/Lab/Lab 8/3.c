#include<stdio.h>
struct student
{
    char name[100];
    int score;
    char grade;
};

int main()
{
    FILE *file1, *file2;
    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\3. input.txt", "r");
    if (file1 == NULL) {
        printf("File doesn't exist.\n ");
        return 0;
    }

    file2 = fopen("E:\\Practice\\C\\Lab\\Lab 8\\3.Output.txt", "w");

    int i, n;
    fscanf(file1, "%d", &n);
    struct student students[n];
    for (i = 0; i < n; i++) {
        fscanf(file1, "%s %d", students[i].name, &students[i].score);
    }

    for (i = 0; i < n; i++) {
        switch (students[i].score / 10) {
            case 10:
            case 9:
            case 8:
                students[i].grade = 'A';
                break;
            case 7:
                students[i].grade = 'B';
                break;
            case 6:
                students[i].grade = 'C';
                break;
            case 5:
                students[i].grade = 'D';
                break;
            case 4:
                students[i].grade = 'E';
                break;
            default:
                students[i].grade = 'F';
                break;
        }
    }

    fprintf(file2, "Name\t\tGrade\n"); // Print the header outside the loop
    for (i = 0; i < n; i++) {
        fprintf(file2, "%s\t\t%c\n", students[i].name, students[i].grade);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
