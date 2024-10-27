#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{
    struct Person person1,person2;
    person1.age=27;
    person1.salary=25555.543;
    printf ("Person 1 : \n");
    printf ("Age = %d\n",person1.age);
    printf ("Salary = %lf\n",person1.salary);

    person2.age=29;
    person2.salary=29999.543;
    printf ("\nPerson 2 : \n");
    printf ("Age = %d\n",person2.age);
    printf ("Salary = %lf\n",person2.salary);
}