//program to find greatest and smallest number entered in an array
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    int smallest = arr[0];
    int greatest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    
    printf("The smallest element in the array is: %d\n", smallest);
    printf("The greatest element in the array is: %d\n", greatest);

    return 0;
}
