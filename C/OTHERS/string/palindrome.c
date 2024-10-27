#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter a string 1: ");
    gets(str1);

    int i = 0, j = 0, len = 0;
    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    i = len - 1;
    while (i >= 0)
    {
        str2[j] = str1[i];
        j++;
        i--;
    }

    str2[j] = '\0';
    printf("String 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);

    int d=strcmp(str1,str2);
if(d==0)
{
    printf("String is palindrome");
}
else
    printf("String is not palindrome");

    return 0;
}
