//program to check whether all the 3 points are in straight line or not
#include<stdio.h>
int main() {
int x1,x2,x3,y1,y2,y3 ;
float p,q;
printf("Enter the coordinates of point A :");
scanf("%d %d",&x1 ,&y1);

printf("Enter the coordinates of point B :");
scanf("%d %d",&x2 ,&y2);

printf("Enter the coordinates of point C :");
scanf("%d %d",&x3 ,&y3);

 p = (y2 - y1) / (x2 - x1);
 q = (y3 - y2) / (x3 - x2);


if (p == q)
{
    printf("All the three points are in a straight line");

}

else 
{
    printf("They are not in a straight line");

}
return 0;
}