#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long a[n];
    
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    int x;
    scanf("%d",&x);
    if(x>0&&x<=n){
        a[x-1]=1-a[x-1];
    }
    for(int i=0 ;i<n;i++){
        printf("%ld ",a[i]);
    }
    return 0;
}