#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    
    for(int i=0; i<=n;i++)
    {
        printf("%d\n",i);
        printf("Line 1\n");
        printf("Line 2\n");

       if(i==5){
         continue;
       }
        printf("Line 3\n");
        printf("Line 4\n");
    }
}
 // continue skip the condition of the loopf