#include <stdio.h>

struct Student
{
    char name[100];
    char id[100];
    float gpa;
};

int main()

{
    struct Student student[4];

    int i;

    for(i=0;i<4;i++){

    printf ("Enter the information of Student %d\n",i+1);

    printf("Name :");
    fflush(stdin);
    gets(student[i].name);

    printf("Id  :");
    fflush(stdin);
    gets(student[i].id);


    printf("GPA :");
    scanf("%f",&student[i].gpa);

    }
      for(i=0;i<4;i++){

    printf("\n \nInformation of student %d\n : ",i+1);
    printf("Student name: %s\n",student[i].name);
    printf("Student Id : %s\n",student[i].id);
    printf("Student gpa : %f\n",student[i].gpa);
      }
}
