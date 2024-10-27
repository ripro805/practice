#include <stdio.h>

int main() {
    int n,x,y;
    scanf("%d %d %d", &n,&x,&y);
    int cnt=0;
    for(int i=0; i<n; i++){
        int z;
        scanf("%d",&z);
        if(z>=x && z<=y){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}