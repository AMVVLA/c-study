#include <stdio.h>

int main()
{
    char last, first, ch;
    printf("Enter a first and last name: ");
    while((ch = getchar()) == ' ')
        ;
    first = ch;
    while(getchar() != ' ')
        ;
    while((ch = getchar()) == ' ')
        ;
    last = ch;
    putchar(last);
    while((ch = getchar()) != '\n' && ch != ' ')
        putchar(ch);
    printf(", %c.\n", first);
    return 0;
}
