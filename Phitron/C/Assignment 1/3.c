#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=1000){
        printf("Three Kacchi");
    }
    else if(n>=500){
        printf("One Large Pizza");
    }
     else if(n<500 && n>=250){
        printf("Three Small Burger");
    }
     else if(n>=100){
        printf("Three Fuchka");
    }
    else{
        printf("Nothing");
    }
    return 0;
}
