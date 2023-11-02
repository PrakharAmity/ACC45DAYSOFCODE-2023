//program to find the points in (X,y) coordinates system lies in which quadrant
#include <stdio.h>

int main() {
    float x, y;

    
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant 1.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant 2.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant 3.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant 4.\n", x, y);
    } else if (x != 0 && y == 0) {
        printf("The point (%.2f, %.2f) lies on the positive x-axis.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the positive y-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies on the origin (0, 0).\n", x, y);
    }

    return 0;
}
