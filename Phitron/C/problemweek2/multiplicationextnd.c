#include<stdio.h>
int main (){
    int n;
scanf("%d",&n);

for(int i=1;i<=n;i++){
   for(int j=1; j<=10;j++){
     printf("%d x %d= %2d\n",i,j,i*j);
}
printf("\n \n");
}
}