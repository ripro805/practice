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

void selectionSort(int *arr, int n)
{
    int indexOfMin, temp;
    cout << "Running Selection Sort" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[indexOfMin]){
                indexOfMin=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
    }
}
int main()

{
    int arr[] = {3, 6, 5, 9, 4, 12};
    int n = 6;
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}