#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
    if(n%5==0&&n%11==0){
    printf("The number is divisible  by 5 and 11 both");
    }
    if(n%5==0&&n%11!=0){
        printf("The number is divisible by 5 but not 11");
    }
    if(n%5!=0&&n%11==0){
        printf("The number is divisible by 11 but not 5");
    }
    if(n%5!=0&&n%11!=0){
        printf("The number is neither divisible by 5 nor 11");
    }
    return 0;

}