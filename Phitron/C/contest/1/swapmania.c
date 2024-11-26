#include <stdio.h>
#include<string.h>
#define maxchar 26


int main() {
    char s[10001],t[10001];
    int count_s[maxchar]={0},count_t[maxchar]={0};
    scanf("%s",s);
    scanf("%s",t);
    if(strlen(s)!=strlen(t)){
        printf("NO\n");
    }
    for(int i=0;s[i]!='\0';i++){
        count_s[s[i]-'a']++;
        count_t[t[i]-'a']++;

    }
    for(int i=0;i<maxchar;i++){
        if(count_s[i]!=count_t[i]){
            printf("NO\n");
             return 0;
        }
       
        
    }
     printf("YES\n");
    return 0;
}
