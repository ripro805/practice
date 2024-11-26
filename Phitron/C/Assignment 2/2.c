#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);
    long a[n];
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
        if(a[i]==0){
            zero++;
        }
    else if(a[i]==1){
        one++;
    }

    }
    printf("%d %d",zero,one);
    return 0;
}