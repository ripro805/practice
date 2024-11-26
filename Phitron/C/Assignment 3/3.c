#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num], cnt[100005]={0};
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
        cnt[arr[i]]++;
    }
    int num_cnt=0;
    for(int i=1; i<100005; i++){
        if(cnt[i]==1){
            num_cnt++;
        }
    }
    printf("%d\n",num_cnt);
    return 0;
}
