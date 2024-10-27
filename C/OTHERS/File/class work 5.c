#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    FILE *file1;

    file1 = fopen("classwork 5.txt", "a+");

    if (file1 == NULL)
    {
        printf("File doesn't exist");
        exit(0);
    }

    int sum[100]; // Assuming a maximum of 100 pairs
    int i = 0;

    while (fscanf(file1, "%d %d", &x, &y) == 2)
    {
        sum[i] = x + y;
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        fprintf(file1, "\n %d %d %d", x, y, sum[j]);
    }

    fclose(file1);

    return 0;
}