#include <iostream>
using namespace std;

void mergeArrays(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from a and b in sorted order
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Append remaining elements from a (if any)
    while (i < n) {
        c[k++] = a[i++];
    }

    // Append remaining elements from b (if any)
    while (j < m) {
        c[k++] = b[j++];
    }
}

int main() {
    // Example arrays
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    // Resultant array to hold merged elements
    int c[n + m];

    // Merge the arrays
    mergeArrays(a, n, b, m, c);

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
