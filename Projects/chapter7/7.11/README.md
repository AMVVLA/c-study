### Project 7.11

Write a program that takes a first name and a last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:

```
Enter a first and last name: Lloyd Fosdick
Fodsick, L.
```
The user's input may contain extre spaces before the first name, between the first and last names, and after the last name.

### Solution

```c
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
```
