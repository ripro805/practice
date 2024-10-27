#include<stdio.h>
int main()
{   int i;
    char name[50]="Prova";
    char *ptr;

    ptr= name;

    for(i=0;*(ptr+i);i++)
    {
        printf("%c",*(ptr+i));
    }
}