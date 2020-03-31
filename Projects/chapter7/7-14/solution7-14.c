#include <stdio.h>
#include <math.h>

int main(void) {

    double number, x = 1;
    int i = 0;

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    while (fabs(number - x) > 0.00001)
        x = (x + number / x) / 2;

    printf("Square root: %.5f\n", x);

    printf("%d\n", i);
    return 0;
}
