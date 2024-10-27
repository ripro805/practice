#include <stdio.h>
#include <string.h>

int main() {
    int i, vowel = 0, consonant = 0;
    char str[1000];

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        } else {
            consonant++;
        }
    }

    printf("Total number of vowels = %d\n", vowel);
    printf("Total number of consonants = %d\n", consonant);

    return 0;
}
