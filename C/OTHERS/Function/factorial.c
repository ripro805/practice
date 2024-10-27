#include<stdio.h>
int getfact(int x){
int f=1,i;
for(i=1;i<=x;i++){
    f=f*i;
}
return f;

}
int main(){
int n,fact;
scanf("%d",&n);
fact=getfact(n);
printf("Factorial of %d is %d",n,fact);
return 0;

}

