#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long a[n];  
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long x, searching = -1;
    scanf("%lld", &x);
    
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            searching += a[i];   
            printf("%d\n", i);  
            break;
        }
    }

    if (searching != -1) {
        printf("%lld\n", searching);  
    } else {
        printf("-1\n");  
    }

    return 0;
}
