#include<stdio.h>
int main()
{
    int n,ones,tens;
    scanf("%d",&n);
   
    ones=n%10;
    tens=n/10;
    tens=tens%10;

   if(ones==0||tens==0)
   {
    printf("YES");
   }
   else if (tens%ones==0 ||ones%tens==0){
    printf("YES");
   }
   else
   {
    printf("NO");
   }
}