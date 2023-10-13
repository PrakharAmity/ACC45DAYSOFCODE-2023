//take float number and print the fractional part of real number 
#include<stdio.h>
int main() {
float x;
printf("Enter a decimal number :");
scanf("%f",& x);
int y=x;

printf("%d", y);
float z = x-y;
printf("The fractional part of entered number %f is %f", x,z);
 return 0;
}