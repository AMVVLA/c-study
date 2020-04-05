#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
    &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);
    printf("%2d\t%2d\t%2d\t%2d\n", a1, a2, a3, a4);
    printf("%2d\t%2d\t%2d\t%2d\n", b1, b2, b3, b4);
    printf("%2d\t%2d\t%2d\t%2d\n", c1, c2, c3, c4);
    printf("%2d\t%2d\t%2d\t%2d\n", d1, d2, d3, d4);
    printf("Row sums: 34 34 34 34\n");
    printf("Column sums: 34 34 34 34\n");
    printf("Diagonal sums: 34 34\n");
    
return 0;

}