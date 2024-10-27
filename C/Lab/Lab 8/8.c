#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2;
    file1 = fopen("D:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\8.input.txt", "r");
    file2 = fopen("D:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\8.output.txt", "w");
    if (file1 == NULL)
    {
        printf(" Input file not found\n");
        exit(0);
    }
    int n1, n2;
    char ch;
    printf("Enter num of last characters= ");
    scanf("%d", &n1);
    fseek(file1, -n1, 2);
    while (fscanf(file1, "%c", &ch) == 1)
    {
        if (feof(file1))
        {
            break;
        }
        printf("%c", ch);
        fprintf(file2, "%c", ch);
    }
    fprintf(file2, "\n");
    printf("\n");
    rewind(file1);
    printf("Enter num of first characters= ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        fscanf(file1, "%c", &ch);
        printf("%c", ch);
        fprintf(file2, "%c", ch);
    }
    fclose(file1);
    fclose(file2);
}
