#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area
    if (radius >= 0) {

area =3.14* radius*radius;
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
    } else {
        printf("Invalid radius. Please enter a non-negative value.\n");
    }

    return 0;
}
