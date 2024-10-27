#include <stdio.h>

union test1
{
    int x, y;
};

union test2
{
    char ch;
    int x;
};

union test3
{
    char name[20];
    double d;
};


struct test4
{
    int x;
    int y;
    char name[20];
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;


    printf("Size of (test1)=%d\n",sizeof(t1));
    printf("Size of (test2)=%d\n",sizeof(t2));
    printf("Size of (test3)=%d\n",sizeof(t3));
    printf("Size of (test4)=%d\n",sizeof(t4));

}