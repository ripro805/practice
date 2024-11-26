#include<stdio.h>
int main (){
    int t;
scanf("%d",&t);

while(t--){
    int n;
    scanf("%d",&n);
    if(n==0){
    printf("0\n");
}

    while(n!=0)
    {
    int digit=n%10;
    printf("%d",digit);
     n/=10;
    }
    printf("\n");
}

}