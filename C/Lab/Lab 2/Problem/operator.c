#include<stdio.h>
int main()
{
    char op;
    printf("enter an operator(+,-,*,/,%):");
    scanf("%c",&op);
    int a,b;
    printf("enter two integer number:");
    scanf("%d %d",&a,&b);
    switch(op)
    {
    case '+':
        printf("addition=%d",a+b);
        break;
    case '-':
        printf("subtraction=%d",a-b);
        break;
    case '*':
        printf("multiplication=%d",a*b);
        break;
    case '/':
        printf("division=%f",1.0*a/b);
        break;
    case '%':
        printf("%d%c%d=%d",a,op,b,a%b);
        break;
    default:
        printf("not a valid calculator");
        break;
    }
}

