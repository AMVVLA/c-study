#include <stdio.h>

int main()
{
    int income;
    float tax;
    printf("Enter the amount of taxable income: ");
    scanf("$%d", &income);
    
    if(income<750)
    tax = 0.01 * income;
    else if(income>=750 && income<=2250)
    tax = 7.50f + 0.02 * income;
    else if(income>2250 && income<=3750)
    tax = 37.50f + 0.03 * income;
    else if(income>3750 && income<=5250)
    tax = 82.50f + 0.04 * income;
    else if(income>5250 && income<=7000)
    tax = 142.50f + 0.05 * income;
    else if(income>7000)
    tax = 230.0f + 0.06 * income;
    
    printf("Amount of tax: $%.2f", tax );
}
