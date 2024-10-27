#include<stdio.h>
struct Person
{  
    char name[50];
    int age;
    double salary;
};
     void display (struct Person p)
     {
        printf("Name : %s\n",p.name);
        printf("Age : %d\n",p.age);
        printf("Salary: %lf\n",p.salary);
     }

    
int main()
  {

    struct Person person1;
    strcpy(person1.name,"Prova");
           person1.age=21;
           person1.salary=50000.00;

           display(person1);
           
    struct Person person2;
    strcpy(person2.name,"Rizvi");
           person2.age=22;
           person2.salary=80000.00;

           display(person2);    
    struct Person person3;
    strcpy(person3.name,"Tasmiah");
           person3.age=19;
           person3.salary=40000.00;

           display(person3);

  }