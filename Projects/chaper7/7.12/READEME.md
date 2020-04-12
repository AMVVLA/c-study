### Project 7.12
Write a program that evaluates an expression:

```
Enter an expression: 1+2.5*3
Value of expression: 10.5
```
The operands in the expression are floating-point numbers; the operators are `+`, `-`, `*` and `/`. The expression is evalued from left to right (no operator taes precedence over any other operator).

### Solution

```c
#include <stdio.h>

int main()
{
    char ch;
    float value, value2;
    printf("Enter an expression: ");
    scanf("%f", &value);
    while((ch = getchar()) != '\n')
    {
        if(ch == '+')
        {
            scanf("%f", &value2);
            value += value2;
        }
        else if(ch == '-')
        {
            scanf("%f", &value2);
            value -= value2;
        }
         else if(ch == '*')
        {
            scanf("%f", &value2);
            value *= value2;
        }  
        else if(ch == '/')
        {
            scanf("%f", &value2);
            value /= value2;
        }
    }
    printf("%.1f\n", value);
    return 0;
}
```
