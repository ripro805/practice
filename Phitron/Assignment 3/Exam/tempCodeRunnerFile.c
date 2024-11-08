#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n!=m){
        printf("NO\n");
        return 0;
    }
    int mat[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  
                scanf("%d", &mat[i][j]);
        }
    }
    
    int flag = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                if (mat[i][j] != 1) {
                    flag = 0;
                }
            }
            if ((i + j) == n - 1) {
                if (mat[i][j] != 1) {
                    flag = 0;
                }
            }
            if ((i != j) && (i + j) != n - 1) {
                if (mat[i][j] == 1) {
                    flag = 0;
                }
            }
        }
    }
    
    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
