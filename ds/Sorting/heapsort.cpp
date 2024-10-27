#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void heapSort(int arr[], int n, bool isMaxHeap) {
  
    if (isMaxHeap) {
        for (int i = n / 2 - 1; i >= 0; i--) {
            maxHeapify(arr, n, i);
        }
    } else {
        for (int i = n / 2 - 1; i >= 0; i--) {
            minHeapify(arr, n, i);
        }
    }

   
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);  
      
        if (isMaxHeap) {
            maxHeapify(arr, i, 0);
        } else {
            minHeapify(arr, i, 0);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    printArray(arr, n);

    bool isMaxHeap;

    
    cout << "Enter 1 for max-heap sort or 0 for min-heap sort: ";
    cin >> isMaxHeap;

    
    heapSort(arr, n, isMaxHeap);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
