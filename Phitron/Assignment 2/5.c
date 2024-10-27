#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);
   long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    long long dif;
    for(int i=0;i<n;i++){
        dif=max-a[i];
        printf("%lld ",dif);
    }
    
    
    return 0;
}