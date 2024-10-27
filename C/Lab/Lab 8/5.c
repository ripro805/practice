#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;

    int  n, i;
    double num[1000];
    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\5. input.txt", "r");
    file2 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\5. Output.txt", "w");

    if (file1 == NULL) {
        printf("File is not found");
        exit(1);
    }
    
    fscanf(file1, "%d\n", &n);
    for (i = 0; i < n; i++) {
        fscanf(file1, "%lf\n", &num[i]);
    }
    
   double max = num[0];
   double min = num[0];

    for (i = 0; i < n; i++) {
        if (max < num[i]) {
            max = num[i];
        }

        if (min > num[i]) {
            min = num[i];
        }
    }

    fprintf(file2, "Maximum=%lf\n", max);
    fprintf(file2, "Minimum=%lf\n", min);

    fclose(file1);
    fclose(file2);

    return 0;
}
