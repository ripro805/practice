#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int maximum(int arr[],int n){
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i]; 
        }
    }
    return max;
}
void countSort(int *arr,int n){
 int i,j;
 int max =maximum(arr,n);
  int *count=new int[max+1];//dynamically using new
  for( i=0;i<max+1;i++){
    count[i]=0;
  }
  for( i=0;i<n;i++){
    count[arr[i]]+=1;
  }
  i=0; //counter for count array
  j=0; //counter for main array

  while(i<=max){
    if(count[i]>0){
        arr[j]=i;
        count[i]-=1;
        j++;
    }
    else{
        i++;
    }
  }
}
int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    countSort(A,n);
    printArray(A, n);
    return 0;
}