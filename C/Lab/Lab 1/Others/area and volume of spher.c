#include <stdio.h>

int main() {
    double radius, area, volume;

    printf("Enter the value of radius: ");
    scanf("%lf", &radius);

    area = 4 * 3.1416 * radius * radius ;
    printf("Area = %.2lf\n", area);

    volume = 4/3 * 3.1416 * radius * radius *radius;
    printf("Volume = %.2lf\n", volume);

    return 0;
}


