### Project 7.06
Write a program that prints the values of `sizeof(int)`, `sizeof(short)`, `sizeof(long)`, `sizeof(float)`, `sizeof(double)`, `sizeof(long double)`.

### Solution
```c
#include <stdio.h>

int main()
{
    printf("size of int:%ld\n", sizeof(int));
    printf("size of short:%ld\n", sizeof(short));
    printf("size of long:%ld\n", sizeof(long));
    printf("size of float:%ld\n", sizeof(float));
    printf("size of double:%ld\n", sizeof(double));
    printf("size of long double:%ld\n", sizeof(long double));

    return 0;
}
```
