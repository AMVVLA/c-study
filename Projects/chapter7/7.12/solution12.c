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
