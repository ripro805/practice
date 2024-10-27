#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if (marks>=33 && marks<=100){
          printf("You have passed\n");
    if (marks<0 || marks>100){
        printf("Invalid Number\n");
    }
    else if(marks<=100 &&marks>=80){
        printf("A+\n+");

        if(marks<=90)
        {
            printf("Congrats. you have got scholarship");

        }
    }
    else if(marks>=70 ){
        printf("A\n");
    }
     else if(marks>=60){
        printf("A-\n");
    }
     else if(marks>=50){
        printf("B\n");
    }
     else if(marks>=40){
        printf("C\n");
     }
      else if(marks>=33){
        printf("D\n");
      }
    }
      
    else{
        printf("F\n");
        printf("You have failed");
    }

}