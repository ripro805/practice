#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);
    switch(marks/10)
    {
  case 10:
  case 9:
  case 8:
    printf("A+");
    break;
  case 7:
    printf("A");
       break;
  case 6:
    printf("B+");
       break;
  case 5:
    printf("B");
       break;
  case 4:
    printf("C");
       break;
  default:
    printf("F");
       break;

    }
}

