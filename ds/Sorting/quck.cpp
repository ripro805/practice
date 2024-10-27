#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int low, int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
do{
    while(arr[i]<=pivot){
        i++;
    }
     while(arr[j]>pivot){
         j--;
    }

    if( i<j ){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);

     temp=arr[low];
     arr[low]=arr[j];
     arr[j]=temp;
     return j;
    
}
void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}
int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0,n-1);
    printArray(arr, n);
    return 0;
}