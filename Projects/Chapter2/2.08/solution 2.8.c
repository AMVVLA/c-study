#include <stdio.h>

int main(void)
{
    float loan;
    float rate;
    float payment;
    float first;
    float second;
    float third;

    printf("Enter amount of loan:" );
      scanf("%f", &loan);
    printf("Enter interest rate:" );
      scanf("%f", &rate);
    printf("Enter monthly payment:" );
      scanf("%f", &payment);

      first = loan + (loan*0.01*rate/12) - payment;
      second = first + (first*0.01*rate/12) - payment;
      third = second + (second*0.01*rate/12) - payment;
      
      printf("Balance remaining after first payment: %.2f\n", first );
      printf("Balance remaining after second payment: %.2f\n", second );
      printf("Balance remaining after third payment: %.2f\n", third );
}