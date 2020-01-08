#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l,first_sum, second_sum, total;

    printf("Enter the UPC(12digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    first_sum = a + c + e + g + i + k;
    second_sum = b + d + f + h + j;
    total = 3* first_sum + second_sum;
    
    if (l == 9 - ((total - 1) % 10))
    printf("Valid");
    else
    printf("Not Valid");
    

 
    return 0;
    
}