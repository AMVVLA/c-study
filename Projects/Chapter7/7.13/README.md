### Project 7.13
Write a program that calculates the average word length for a sentence:

```c
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
```
For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. Display the average word length to one decimal place.

### Solution

```c
#include <stdio.h>

int main()
{
    int i, j;
    char ch;

    i = 0;
    j = 1;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n')
    {
        if(ch != ' ' )
            i++;
        else if(ch == ' ')
            j++;
    }
    printf("Average word length: %.1f\n", (float)i / (float)j);
    return 0;
}
```
