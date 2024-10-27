#include<stdio.h>
int main()
{
   while(1){
     int num,i;
     printf("Enter the value of num:");
     scanf("%d",&num);
     for(i=1;i<=10;i++)
     {
         printf("%d * %d= %d\n",num,i,num*i);
     }
   }

}
