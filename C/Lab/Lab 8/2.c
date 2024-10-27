#include <stdio.h>

int main() {
    FILE *file1 ;
    
    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\2. input .txt", "r+");
    
    
    
    if (file1 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    int num, sum = 0;
    
    // Read integers from the file and calculate the sum
    while (fscanf(file1, "%d\n", &num) == 1) {
        sum += num;
    }
    
    // Append the sum at the end of the file
    fprintf(file1, "Sum= %d\n", sum);
    
    fclose(file1);
    
    printf("Sum of integers: %d\n", sum);
    
    return 0;
}
