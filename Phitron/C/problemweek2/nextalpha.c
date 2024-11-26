#include <stdio.h>
int main ()
{
    char n;
    scanf("%c",&n);
    if(n>='a'&& n<'z')
    {
      n=n+1;
      printf("%c",n);
    }
    

    if(n=='z'){
        printf("a");
    }
}