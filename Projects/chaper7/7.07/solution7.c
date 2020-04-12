#include <stdio.h>

int main()

{
    int a, b, c, d, num, den;
    char ch;

    printf("Enter the two fractions and arithmetic operations: ");
    scanf("%d/%d %c %d/%d",&a, &b, &ch, &c, &d);
    if(ch == '+')
        num = a * d + b * c, den = b * d;
    else if(ch == '-')
        num = a * d - b * c, den = b * d;
    else if(ch == '*')
        num = a * c, den = b * d;
    else if(ch == '/')
        num = a * d, den = b * c;
    else
    {
        printf("error\n");
        return 1;
    }
    printf("The answer is %d/%d\n" ,num, den);
    return 0;
}
