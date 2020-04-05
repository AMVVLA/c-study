#include <stdio.h>

int main()
{
    int first;
    int second;
    int third;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d)%d-%d", &first, &second, &third);
    printf("you entered %.3d.%.3d.%.4d", first, second, third);
}