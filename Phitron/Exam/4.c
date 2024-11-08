#include<stdio.h>
#include<string.h>

int main(){
    char a[101],b[101],c[101];
    scanf("%s %s %s",a,b,c);
    int len = strlen(a);
    int ans = 0;
    for(int i=0; i<len; i++){
        int change_a = (a[i]!=b[i])+(a[i]!=c[i]);
        int change_b = (a[i]!=b[i])+(b[i]!=c[i]);
        int change_c = (c[i]!=b[i])+(a[i]!=c[i]);

        int min_change = change_a;
        if(change_b<min_change)
            min_change = change_b;
        if(change_c<min_change)
            min_change = change_c;

        ans += min_change;
    }
    printf("%d\n",ans);
}