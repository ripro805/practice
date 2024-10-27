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

int i=0,j=0, len=0;
while(str1[i]!='\0')
{
    i++;
    len++;
}
while (str2[j]!='\0')
{
    str1[len+j]=str2[j];
    j++;

}
str1[len+j]='\0';
printf("string 1=%s\n",str1);
}
