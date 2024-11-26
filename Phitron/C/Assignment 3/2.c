#include <stdio.h>

int main()
{
    
    int n,m,x;
   scanf("%d %d %d",&n,&m,&x);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
           scanf("%d",&arr[i][j]);

        }
    }
   while (x--) {
        int num;
        scanf("%d",&num);
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == num) {
                    count++;
                }
            }
        }

        printf("%d\n",count);
    }
    

    return 0;
}
