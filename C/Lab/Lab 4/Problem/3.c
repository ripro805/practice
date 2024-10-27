#include <stdio.h>

int main() {
    int arr[1000], i, n, small;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    small = arr[0];

    for (i = 0; i < n; i++) {
        if (small > arr[i]) {
            small = arr[i];
        }
    }

    printf("The smallest number: %d\n", small);

    return 0;
}
