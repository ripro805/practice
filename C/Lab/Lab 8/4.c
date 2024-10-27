#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file1, *file2;

    char word[1000], rev[1000];
    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\4. input.txt", "r");
    file2 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 84. output.txt", "w");

    if (file1 == NULL) {
        printf("File is not found");
        exit(1);
    }

    int i = 0, j, len = 0, d;
    while (fscanf(file1, "%s", word) == 1) {
        len = strlen(word); // Reset length in each iteration
        i = 0; // Reset i in each iteration

        while (word[i] != '\0') {
            i++;
        }

        for (j = 0, i = len - 1; i >= 0; i--, j++) {
            rev[j] = word[i];
        }
        rev[j] = '\0';

        d = strcmp(word, rev);
        if (d == 0) {
            fprintf(file2, "%s\t\t Palindrome\n", word);
        } else {
            fprintf(file2, "%s\t\t Not Palindrome\n", word);
        }
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
