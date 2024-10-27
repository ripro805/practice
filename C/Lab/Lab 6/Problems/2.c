#include <stdio.h>

// Function to calculate the sum of a list of numbers
int get_sum(int x[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum =sum+x[i];
    }
    return sum;
}

// Function to calculate the average of a list of numbers
float get_average(int x[], int n) {
    int sum = get_sum(x,n);
    float average = (float)sum / n;
    return average;
}

int main() {
    int x[100],i,n;
    printf ("Enter array size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    int sum = get_sum(x, n);
    float average = get_average(x, n);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

