#include<stdio.h>
int main()
{
  int n;
printf("enter the integer number:");
scanf("%d",&n);
if (n%15==0)
    {
  printf("fizzbuzz");

}
else if (n%3==0)
{
    printf("fizz");
}
else {

    printf("buzz");
}
}


