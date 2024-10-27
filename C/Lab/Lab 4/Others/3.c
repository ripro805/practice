#include <stdio.h>

int main() {
    int arr[1000], i, n, large;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

       large = arr[0];

    for (i = 0; i < n; i++) {
        if (large < arr[i]) {
            
        }
    }

    printf("The largest number: %d\n", large);

    return 0;
}
