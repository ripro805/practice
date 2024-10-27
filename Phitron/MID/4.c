#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int x;
        scanf("%d",&x);
        if(x<1){
            printf("Entry-level candidate\n");
        }
        else if(x>=1 && x<=3){
            printf("Junior candidate\n");
        }
        else if(x>=4 && x<=7){
            printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }
    }
    return 0;
}
// Mid-level candidate
// 
// Junior candidate
// 