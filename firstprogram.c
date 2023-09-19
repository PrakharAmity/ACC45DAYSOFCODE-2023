#include <stdio.h>
#include <math.h> // Include the math library

int main() {
    double number, squareRoot;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root
    if (number >= 0) {
        squareRoot = sqrt(number);
        printf("The square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Cannot calculate the square root of a negative number.\n");
    }

    return 0;
}

