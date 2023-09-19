#include <stdio.h>

int main() {
    double length, width, area;

    // Prompt the user to enter the length and width
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area
    area = length * width;

    // Display the result
    printf("The area of the rectangle with length %.2lf and width %.2lf is %.2lf\n", length, width, area);

    return 0;
}
