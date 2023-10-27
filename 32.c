#include <stdio.h>

int main() {
  // size of the triangle
  int size;
  printf("Enter size of triangle to be used for parrern printing :");
  scanf("%d",&size);

  for (int i = 0; i < size; i++) {
    // printing stars
    for (int j = 0; j < size-i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}