#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(ch>='0' && ch<='9')
    {
        printf("is Digit");
    }
    else{
        printf("Is Alpha\n");
        if(ch>='A' && ch<='Z')
        {
            printf("Is capital");
        }

        else{
            printf("Is small");
        }
    }
}