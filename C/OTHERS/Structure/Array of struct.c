#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{
   struct Person person[4];
   int i;
   for(i=0;i<4;i++){
   printf("Enter the information of Person %d\n",i+1);

   printf ("Enter the Age: ");
   scanf("%d",&person[i].age);

   printf ("Enter the Salary: ");
   scanf("%lf",&person[i].salary);
   }

   for(i=0;i<4;i++){
   printf("\nInformation of Person %d\n",i+1);
   printf("\nAge : %d",person[i].age);
   printf("\nSalary : %lf",person[i].salary);

   }
    
    
   

   
}