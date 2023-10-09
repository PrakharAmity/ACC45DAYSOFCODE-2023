// code for calculating area of a triangle using herons formula
#include <stdio.h>
#include <math.h>
 
int main(){
    float sideOne, sideTwo, sideThree, s, area;
     
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);

    s = (sideOne + sideTwo + sideThree)/2;
    area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    printf("Area of triangle : %0.4f\n", area);
     
    return 0;
}
