#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    cout << "Heapifying index: " << i << ", left: " << left << ", right: " << right << endl;
    cout << "Current heap: ";
    
    // Display current heap in one line
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        cout << "Swapping: " << arr[i] << " and " << arr[largest] << endl;
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {
    cout << "Building heap:" << endl;

    // Build the heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    cout << "Max heap built: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    buildHeap(arr, n);

    return 0;
}
