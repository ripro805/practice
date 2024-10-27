#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);

    
    for(int i=100; i<=n;i++)
    {
        printf("Checking....\n",i);

       if(i%2==0 && i%3==0 && i%5==0){
         printf("%d",i);
        break;
       }
    }
}

//break stops the iteration of loop when it reaches the condition