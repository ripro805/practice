#include<stdio.h>
#include<stdlib.h>
struct Book{
char name[100];
int page;
float price;
};
int main(){
struct Book book1,book2,book3;
printf("Enter information of Book 1: \n");
printf("Book 1 name : ");
gets(book1.name);
printf("Book 1 page :");
scanf("%d",&book1.page);
printf("Book 1 price : ");
scanf("%f",&book1.price);


fflush(stdin);
printf("Enter information of Book 2 :\n");
printf("Book 2 name : ");
gets(book2.name);
printf("Book 2 page :");
scanf("%d",&book2.page);
printf("Book 2 price : ");
scanf("%f",&book2.price);

fflush(stdin);
printf("Enter information of Book 3 \n");
printf("Book 3 name : ");
gets(book3.name);
printf("Book 3 page :");
scanf("%d",&book3.page);
printf("Book 3 price :");
scanf("%f",&book3.price);


printf("Book 1= %s %d %.2f\n",book1.name,book1.page,book1.price);
printf("Book 2= %s %d %.2f\n",book2.name,book2.page,book2.price);
printf("Book 3= %s %d %.2f\n",book3.name,book3.page,book3.price);
}
