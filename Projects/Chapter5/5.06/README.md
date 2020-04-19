
### Project 5.06
Modify the `upc.c` program in Section 4.1 so that it checks whether a `UPC` is valid. After the user enters the `UPC`, the program will display either `VALID` or `NOT VALID`.

### Solution 5.06

```c
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
    printf("Valid\n");
    else
    printf("Not Valid\n");
    

 
    return 0;
    
}
```
