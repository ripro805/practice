#include <stdio.h>
int main()
{
char str[100];
printf("Enter a string :");
gets(str);
int len=0,i=0;
while(str[i]!='\0')
{
    i++;
    len++;
}

printf("Length=%d\n",len);

}
