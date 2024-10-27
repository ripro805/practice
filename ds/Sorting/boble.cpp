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
int temp;
int isSorted = 0;
void bubbleSorted(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) // for number passing
    {
        isSorted = 1;
        cout << "Working on Pass no: " << i + 1 << endl;
        for (int j = 0; j < n - 1 - i; j++) // for comparision

        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(arr, n); // before sorting
    bubbleSorted(arr, n);
    printArray(arr, n);    // after sorting
    bubbleSorted(arr2, n); // adaptive check
    printArray(arr2, n);
}