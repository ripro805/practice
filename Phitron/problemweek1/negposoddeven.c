#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    if(n<0){
         printf("Negative\n
         ");
    }
    else{
       printf ("Positive\n");
        if(n%2==0){
            printf("EVEN");
        }
        else{
            printf("ODD");
        }
    }
}