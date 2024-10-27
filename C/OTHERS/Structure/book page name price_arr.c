#include <stdio.h>
#include <stdlib.h>

struct Book {
    char name[100];
    int page;
    float price;
};

int main() {
    struct Book book[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter information of Book No: %d\n", i + 1);
        printf("Book %d name: ", i + 1);
        fgets(book[i].name, sizeof(book[i].name), stdin);
        printf("Book %d page: ", i + 1);
        scanf("%d", &book[i].page);
        printf("Book %d price: ", i + 1);
        scanf("%f", &book[i].price);
        fflush(stdin);
    }

    for (i = 0; i < 3; i++) {
        printf("Book %d: %s %d %.2f\n", i + 1, book[i].name, book[i].page, book[i].price);
    }

    return 0;
}
