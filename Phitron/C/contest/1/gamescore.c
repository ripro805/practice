#include <stdio.h>

int main() {
    int num;
   
    scanf("%d", &num);
    int arr[num+5];
   for(int i=0;i<num;i++){
         scanf("%d", &arr[i]);
   }
   int max=arr[0];
   int min=arr[0];
   int maxCount=0,minCount=0;
   for(int i=1;i<num;i++){
    if(arr[i]>max){
        max=arr[i];
        maxCount++;
    }
    else if(arr[i]<min){
        min=arr[i];
        minCount++;
    }
   }
   printf("%d %d",maxCount,minCount);
    return 0;
}
