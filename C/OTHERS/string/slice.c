#include<stdio.h>

void slice(char str[], int n, int m)
 
{   
    char newstr[100];
    int i,j;

    for(i=n ,j=0; i<=m; i++, j++)
    {
        newstr[j]=str[i];

    }
    newstr[j]='\0';
     puts(newstr);

}

int main()
{
    char str[100];
    fgets(str,100,stdin);

    slice(str, 4, 7);

   

}