//program to calculate total and average marks
#include <stdio.h>

int main()
{
    int english, chemistry, computers, physics, maths; 
    float Total, Average;

    printf("Please Enter the marks of five subjects: \n");
    scanf("%d%d%d%d%d", &english, &chemistry, &computers, &physics, &maths);

    Total = english + chemistry + computer + physics + maths;
    Average = Total / 5;
    

    printf("Total Marks = %.2f\n", Total);
    printf("Average Marks = %.2f\n", Average);
    

    return 0;
}
