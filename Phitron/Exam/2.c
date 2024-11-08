#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Check if the matrix is square
    if (n != m) {
        printf("NO\n");
        return 0;
    }

    int mat[n][m];
    int flag = 1; 

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  
            scanf("%d", &mat[i][j]);

            
            if (i == j || i + j == n - 1) {
                if (mat[i][j] != 1) {
                    flag = 0;
                }
            }
       
            else {
                if (mat[i][j] != 0) {
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
