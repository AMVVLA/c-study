### Project 5.04

Here's a simplified version of the Beaufort scale, which is used to estimate wind force:

| Speed (knots) | Description
| --- | --- |
| Less than 1 | Calm |
| 1-3 | Light air |
| 4-27 | Breeze |
| 28-47 | Gale |
| 48-63 | Storm |
| Above 63 | Hurricane |

Write a program that asks the user to enter a wind speed (in knots), then display the corresponding description.

### Solution
```c
#include <stdio.h>
int main()
{
    int speed;

    printf("Enther the speed(knots)");
    scanf("%d", &speed);
    printf("Wind Description: ");

    if (speed<1)
    printf("calm");
    else if(speed >=1 && speed<=3)
    printf("Light air");
    else if(speed>=4 && speed<=27)
    printf("Breeze");
    else if(speed>=28 && speed<=47)
    printf("Gale");
    else if(speed>=48 && speed<=63)
    printf("Storm");
    else if(speed>63)
    printf("Hurricale");

return 0;
}
```
