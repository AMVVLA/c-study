#include <stdio.h>


int main()


{
    int number;
    float price;
    float commission;
    float value;

    
    printf("Enter the number of shares: ");
    scanf("%d", &number );
    printf("Enter the price per shares: ");
    scanf("%f", &price );
    value = price*number;

    if (value<2500.00f)
    commission = 30.00f + 0.017f * value;
    else if (value<=6250.00f)
    commission = 56.00f + 0.0066f * value;
    else if (value<=20000)
    commission = 76.00f + 0.0034f * value;
    else if (value<=50000)
    commission = 100.00f + 0.0022f * value;
    else if (value<=500000)
    commission = 155.00f + 0.0011f * value;
    else if (value>500000)
    commission = 255.00f + 0.0009f * value;

    if (commission<39.00f)
    commission = 39.00f;
    
    printf("Commission: $%.2f\t", commission );

    if(number<2000)
    commission = 33.00f+0.03f*number ;
    else if(number>=2000)
    commission  = 33.00f+0.02f*number ;
    
    printf("Rival broker Commission: $%.2f", commission );

return 0;
}