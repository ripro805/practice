#include<stdio.h>
int main()
{
    int i=20;
    Prova:
        printf("%d\n",i);
        i--;
        if(i>1)
            goto Prova;
}
