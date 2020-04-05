### Project 7.10

Write a program that counts the number of vowels (a, e, i, o and u) in a sentence:
```
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
```

### Solution

```c
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    char ch;
    i = 0;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n')
    {
        if(toupper(ch) == 'A' || toupper(ch) == 'E' 
            || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U')
            i++;
    }
    printf("Your sentence contains %d vowels\n", i);
    return 0;
}
```
