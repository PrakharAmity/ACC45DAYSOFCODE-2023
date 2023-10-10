//to calculate distance between two points in a 2d plane
#include <stdio.h>
#include<math.h>

int main()
{   
    int x1, x2, y1, y2, distance;
    
    printf("Enter the First Point Coordinates   = ");
    scanf("%d %d",&x1, &y1);

    printf("Enter the Second Point Coordinates  = ");
    scanf("%d %d",&x2, &y2);

    int x = pow((x2- x1), 2);
    int y = pow((y2- y1), 2);
    
    distance = sqrt(x + y);

    printf("\nThe Distance Between Two Points = %d\n", distance); 
}