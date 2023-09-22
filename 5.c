 #include <stdio.h> 
 int main(){
int P,R,T,interest ;


printf("enter the principal value :");
scanf("%d",&P);

printf("enter the rate of interest :");
scanf("%d",&R);

printf("enter the time period in years :");
scanf("%d",&T);

interest = P *R * T/100;
printf("the simple interest is %d ", interest );
return 0;

 }