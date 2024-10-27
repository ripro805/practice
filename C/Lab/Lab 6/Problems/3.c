#include<stdio.h>
char lettergrade(int marks){

if(marks<=100 && marks>=80)
       {
            return 'A';
       }
    else if(marks<=79 && marks>=70)
    {
        return 'B';
    }

    else if(marks<=69 && marks>=60)
   {
        return 'C';
   }
    else if(marks<=59 && marks>=50)
{
       return 'D';
}
    else if(marks<=49 && marks>=40)
   {
       return 'E';
   }

   else
 {
      return 'F';
 }




}

int main()
{
    int total_marks;
    printf("enter marks:");
    scanf("%d",&total_marks);
    char grade=lettergrade(total_marks);
    printf("Grade= %c\n",grade);
    return 0;
}


