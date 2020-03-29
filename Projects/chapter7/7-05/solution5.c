#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int sum;

	sum = 0;
	printf("Enter a word:");
	while((ch = getchar()) != '\n')
	{
		switch(toupper(ch))
        {
            case 'A' : case 'E': case 'I': case 'L': case 'N': 
            case 'O': case 'R': case 'S': case 'T': case 'U':
			ch = 1;
            break;
            case 'D': case 'G': 
			ch = 2;
            break;
           case 'B': case 'C': case 'M': case 'P':
			ch = 3;
            break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': 
			ch = 4;
            break;
            case 'K':
			ch = 5;
            break;
            case 'J': case 'X':
			ch = 8;
            break;
            case 'Q': case 'Z':
			ch = 10;
            break;
        }
		sum += ch;
	}
	printf("Scrabble value:%d\n", sum);
	return 0;
}
