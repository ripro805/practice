#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{
    struct Person person1={34,4545453.66554};
    struct Person person2,person3;
    

    //elements_wise assignment
    person2.age=29;
    person2.salary=29999.543;

    //structure varriable assignment
    person3 = person2;

    
    printf ("Person 1 : \n");
    printf ("Age = %d\n",person1.age);
    printf ("Salary = %lf\n",person1.salary);

    
    printf ("\nPerson 2 : \n");
    printf ("Age = %d\n",person2.age);
    printf ("Salary = %lf\n",person2.salary);


    printf ("\nPerson 3 : \n");
    printf ("Age = %d\n",person3.age);
    printf ("Salary = %lf\n",person3.salary);


    if (person1.age==person2.age && person1.salary==person2.salary)
    printf("Person 1 is equal to Person 2");

    else if (person2.age==person3.age && person2.salary==person3.salary)
    printf("Person 2 is equal to Person 3");
    
    else
     printf("Person 1 is not equal to Person 2");
}