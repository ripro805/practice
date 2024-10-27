#include<stdio.h>
struct Person
{  
    char name[50];
    int age;
    double salary;
};
int main()
{
   struct Person person[4];
   int i;
   for(i=0;i<4;i++){
   printf("Enter the information of Person %d\n",i+1);
   
   printf("Enter the name: ");
   fflush(stdin);
   gets(person[i].name);

   printf ("Enter the Age: ");
   scanf("%d",&person[i].age);

   printf ("Enter the Salary: ");
   scanf("%lf",&person[i].salary);
   }

   for(i=0;i<4;i++){
   printf("\nInformation of Person %d\n",i+1);
   printf("\nName : %s\n",person[i].name);
   printf("\nAge : %d\n",person[i].age);
   printf("\nSalary : %lf\n",person[i].salary);

   }
    
    
   

   
}