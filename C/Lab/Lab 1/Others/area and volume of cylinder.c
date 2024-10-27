#include <stdio.h>

int main() {
    double radius, height, area, volume;

    printf("Enter the value of radius: ");
    scanf("%lf", &radius);

    printf("Enter the value of height: ");
    scanf("%lf", &height);

    area = 2 * 3.1416 * radius * (radius + height);
    printf("Area = %.2lf\n", area);

    volume = 3.1416 * radius * radius * height;
    printf("Volume = %.2lf\n", volume);

    return 0;
}

