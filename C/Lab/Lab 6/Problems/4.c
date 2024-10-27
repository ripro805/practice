#include <stdio.h>

// function of length
int strlen(const char* str1) {
    int len = 0;
    int i = 0;
    while (str1[i] != '\0') {
        i++;
        len++;
    }
    return len;
}

// function of reverse
void strrev(const char* str1, char* str2) {
    int i = 0;
    int j = 0;
    int len = strlen(str1);

    i = len - 1;
    while (i >= 0) {
        str2[j] = str1[i];
        j++;
        i--;
    }

    str2[j] = '\0';
}

// function of copy
void strcpy(const char* str5, char* str4) {
    int i = 0;
    while (str5[i] != '\0') {
        str4[i] = str5[i];
        i++;
    }
    str4[i] = '\0';
}

// function of concatenation
void strcat(char* str5, const char* str4) {
    int i = 0;
    int len = strlen(str5);
    while (str4[i] != '\0') {
        str5[len + i] = str4[i];
        i++;
    }
    str5[len + i] = '\0';
}

// function of compare
int strcmp(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    char str1[100];
    char str2[100];
    char str3[100];

    printf("Enter a string 1: ");
    gets(str1);

    printf("Enter a string 2: ");
    gets(str2);

    // strlen
    printf("Length of str1: %d\n", strlen(str1));

    // strrev
    strrev(str1, str3);
    printf("Reversed str1: %s\n", str3);

    // strcpy
    strcpy(str2, str3);
    printf("Copied str2 to str3: %s\n", str3);

    // strcat
    strcat(str1, str2);
    printf("Concatenated str2 to str1: %s\n", str1);

    // strcmp
    int compareResult = strcmp(str1, str2);
    if (compareResult < 0) {
        printf("str1 is less than str2\n");
    } else if (compareResult > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}
