//c program to perform the operation as choosen by the user from the menu
#include <stdio.h>
#include <math.h>

int main() {
    char choice;
    float num1, num2, result, principal, rate, time, interest, radius, area;

    while (1) {
        printf("\nMenu:\n");
        printf("a) Sum of two numbers\n");
        printf("b) Check if a number is positive or negative\n");
        printf("c) Calculate simple interest\n");
        printf("d) Calculate area of a circle\n");
        printf("e) Exit\n");
        printf("Enter your choice (a/b/c/d/e): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Sum: %.2f\n", result);
                break;
            case 'b':
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 > 0) {
                    printf("Positive\n");
                } else if (num1 < 0) {
                    printf("Negative\n");
                } else {
                    printf("Zero\n");
                }
                break;
            case 'c':
                printf("Enter principal amount: ");
                scanf("%f", &principal);
                printf("Enter rate of interest: ");
                scanf("%f", &rate);
                printf("Enter time (in years): ");
                scanf("%f", &time);
                interest = (principal * rate * time) / 100;
                printf("Simple Interest: %.2f\n", interest);
                break;
            case 'd':
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = M_PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 'e':
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
