#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    printf("Check digit: %d", 9 - (((3*(b + d + f + h + j + l) + (a + c + e + g + i + k)) - 1) % 10));
 
    return 0;
    
}