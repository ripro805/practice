#include <stdio.h>
#include <stdlib.h> // Include this header for the exit() function

int main()
{
    int x, y;
    FILE *file1, *file2;

    file1 = fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\classwork 4.txt", "r");

    if (file1 == NULL)
    {
        printf("File doesn't exist");
        exit(0);
    }

    printf("File is opened\n");
    file2 = fopen("class work 4 out.txt", "w");

    while (fscanf(file1, "%d %d", &x, &y) == 2)
    {
        printf("%d + %d = %d\n", x, y, x + y);

        fprintf(file2, "%d + %d = %d\n", x, y, x + y);
    }
    fclose(file2);
    fclose(file1);

    return 0;
}
