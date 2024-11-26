#include <stdio.h>
#include<string.h>
#define maxchar 26
int main() {
    char str[1001];
    scanf("%s",str);
    int f[maxchar]={0};
   for (int i = 0; str[i]!='\0'; i++)
   {
      f[str[i]-'a']++;
   }
   int oddCount=0;
   for (int i = 0; i < maxchar; i++)
   {
    if(f[i]%2!=0){
        oddCount++;
    }
   }
   if(oddCount>1){
    printf("%d\n",oddCount-1);
   }
   else{
    printf("0\n");
   }
   
    
    return 0;
}
