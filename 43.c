//program to calculate the sum of entered elements in an array
#include <stdio.h>

int main() {
    int array[n];
    int n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; 
    }

    printf("The elements entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\nThe sum of the elements is: %d\n", sum);

    return 0;
}
