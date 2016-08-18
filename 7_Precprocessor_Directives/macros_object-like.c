#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius *radius;
    circumference = 2 * PI * radius;

    printf("Area = %f\n", area);
    printf("Circumference = %f", circumference);

    getch();
    return 0;
}
