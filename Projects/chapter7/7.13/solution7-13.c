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
