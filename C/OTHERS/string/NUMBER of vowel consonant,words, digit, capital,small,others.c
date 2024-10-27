#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int vowel = 0, consonant = 0, digit = 0, word = 0, capital = 0, small = 0, others = 0, i = 0;
    char ch = str[i];

    while (ch != '\0')
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }

            if (ch >= 'a' && ch <= 'z')
            {
                small++;
            }
            else
            {
                capital++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch == ' ')
        {
            word++;
        }
        else
        {
            others++;
        }

        i++;
        ch = str[i];
    }

    word++;

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Capital letters: %d\n", capital);
    printf("Small letters: %d\n", small);
    printf("Digits: %d\n", digit);
    printf("Words: %d\n", word);
    printf("Other characters: %d\n", others);

    return 0;
}
