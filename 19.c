// code to calculate profit and loss
#include<stdio.h>

int main()
{
    float Sp, Cp, profit, loss;
    printf("Enter cost price: ");
    scanf("%f", &Cp);
    printf("Enter selling price: ");
    scanf("%f", &Sp);
    if(sp>cp)
    {
        profit = Sp-Cp;
        printf("Profit = %.2f", profit);
    }
    else if(Cp>Sp)
    {
        loss = Cp-Sp;
        printf("Loss = %.2f", loss);
    }
    else
        printf("No profit and loss.");
   
    return 0;
}