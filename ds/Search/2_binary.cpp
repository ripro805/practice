#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 7, 8, 10, 12, 15, 17, 19, 32, 38};
    int size = sizeof(arr) / sizeof(int);
    int element = 17;
    int searchIndex = binarySearch(arr, size, element);
    cout << "The element " << element << " was found at index " << searchIndex << endl;

    return 0;
}