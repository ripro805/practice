#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 7, 1, 3, 9, 6, 17, 98, 56, 43, 54};
    int size = sizeof(arr) / sizeof(int);
    int element = 17;
    int searchIndex = linearSearch(arr, size, element);
    cout << "The element " << element << " was found at index " << searchIndex << endl;

    return 0;
}