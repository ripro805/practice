#include<stdio.h>

int factorial(int num) {
    int i;
    int fact = 1;
    if (num < 0) {
        printf("Factorial cannot be calculated for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
    }
    return fact;
}

int npr(int n, int r) {
    return factorial(n)/factorial(n-r);
}

int ncr(int n, int r){
    return npr(n,r)/factorial(r);
}

int main() {
    int n,r,np,nc;

    printf("Enter the value of n :");
    scanf("%d",&n);

    printf("Enter the value of r :");
    scanf("%d",&r);

    np=npr(n,r);
    nc=ncr(n,r);

    printf("The npr is = %d\n",np);
    printf("The ncr is = %d\n",nc);

    return 0;
}

