#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100];
char str2[100];
printf("Enter a string 1 :");
gets(str1);
printf("Enter a string 2 : ");
gets(str2);

int d=strcmp(str1,str2);
if(d==0)
{
    printf("Both are same");
}
else
    printf("Both are not same");
}
