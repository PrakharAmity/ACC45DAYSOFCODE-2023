//c program code to calculate mean of entered marks
#include <stdio.h>

int main() {
    int marks[100]; 
    int n, i;
    float sum = 0.0, mean;

    
    printf("Enter the number of marks: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of marks. Please enter a value between 1 and 100.\n");
        return 1; 
    }

    printf("Enter %d marks:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

   
    mean = sum / n;

  
    printf("The mean of the %d marks is: %.2f\n", n, mean);

    return 0;
}
