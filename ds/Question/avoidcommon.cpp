#include <iostream>
using namespace std;

void findCommonElements(int a[], int n, int b[], int m) {
    cout << "Common elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break; // Avoid counting the same element multiple times
            }
        }
    }
    cout << endl;
}

int main() {
    int a[] = {1, 3, 4, 5, 7};
    int b[] = {2, 3, 5, 6};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    findCommonElements(a, n, b, m);

    return 0;
}
