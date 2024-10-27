#include<stdio.h>
int main()
{
    int choice;
    float temp,converted_temp;
    printf("Temparature converted menu\n");
    printf("1. f to c\n");
     printf("2. c to f\n");
     scanf("enter your choice=");
     scanf("%d",&choice);
     switch (choice)
     {
         case 1:
         {
             printf("enter the f temp :");
             scanf("%f",&temp);
             converted_temp=(temp-32)/1.8;
             printf("temp in c is=%f\n",converted_temp);
            break;
         }
           case 2:
         {
             printf("enter the c temp :");
             scanf("%f",&temp);
             converted_temp=(temp*1.8)+32;
             printf("temp in f is=%f\n",converted_temp);
            break;
         }
           default:
            printf("Not a correct option");
     }
}
