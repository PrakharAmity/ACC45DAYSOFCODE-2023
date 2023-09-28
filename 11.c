//Program to Calculate the table of any number

#include <stdio.h>
int main(){
int x,i;
printf("Enter a Number");
scanf("%d",&x);
for(i=1 ; i<=10 ; i++){
printf("\n");
printf("%d*%d = %d" , x , i , x*i);
}

return 0;

}