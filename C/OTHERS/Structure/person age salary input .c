#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{
    struct Person person1,person2;

    printf("Enter the information of Person 1 : \n");
    printf("Enter Age : ");
    scanf("%d",& person1.age);
    printf("Enter Salary : ");
    scanf("%lf",& person1.salary);

    printf("Enter the information of Person 2 : \n");
    printf("Enter Age : ");
    scanf("%d",& person2.age);
    printf("Enter Salary : ");
    scanf("%lf",& person2.salary);


    printf ("Person 1 : \n");
    printf ("Age = %d\n",person1.age);
    printf ("Salary = %lf\n",person1.salary);

   
    printf ("\nPerson 2 : \n");
    printf ("Age = %d\n",person2.age);
    printf ("Salary = %lf\n",person2.salary);

    
}