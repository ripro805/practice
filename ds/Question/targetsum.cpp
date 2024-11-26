#include <iostream>
using namespace std;

void findPairsWithSum(int a[], int n, int targetSum) {
    cout << "Pairs with sum " << targetSum << " are:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == targetSum) {
                cout << "(" << a[i] << ", " << a[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int a[] = {10, 20, 5, 25, 15, 5, 30, 0, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int targetSum = 30;

    findPairsWithSum(a, n, targetSum);

    return 0;
}
