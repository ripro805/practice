#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n,&t);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    long long sum = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum<=t){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}