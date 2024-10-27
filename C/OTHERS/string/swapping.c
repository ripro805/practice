#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100];
char str2[100];
char str3[100];
printf("Enter a string 1 :");
gets(str1);
printf("Enter a string 2 : ");
gets(str2);
strcpy(str3,str1);
strcpy(str1,str2);
strcpy(str2,str3);
printf("str1=%s\n",str1);
printf("str2=%s\n",str2);


}
