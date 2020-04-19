### Project 5.05

In one state single residents are subject to the following income tax:

| Income | Amount of tax | |
| - | - | - |
| Not over $750 | 1% of income  |
| $750-$2,250 | $7.50 | plus 2% of amount over $750 |
| $2,250-$3,750 | $37.50 | plus 3% of amount over $2,250 |
| $3,750-$5,250 | $82.50 | plus 4% of amount over $3,750 |
| $5,250-$7,000 | $142.50 | plus 5% of amount over $5,250 |
| Over $7,000 | $230.00 | plus 6% of amount over $7,000 |

Write a program that asks the user to enter the amount of taxable income, then
displays the tax due.

### Solution

```c
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
```
