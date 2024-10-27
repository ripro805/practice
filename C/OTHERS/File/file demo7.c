#include <stdio.h>

int main() {   
    char fname[40];
    char lname[40];

    FILE *file;
    file = fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\Name.txt", "r");

    if (file == NULL) {
        printf("File doesn't exist or couldn't be opened.\n");
    } else {
        printf("File is opened.\n");

        fscanf(file, "%s\t%s", fname, lname); // Removed & before fname and lname
        
        printf("%s\t%s\n", fname, lname); // Added \n for formatting
        
        fclose(file);
    }

    return 0;
}
