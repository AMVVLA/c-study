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

