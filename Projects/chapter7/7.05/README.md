### Project 7.05

In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another, based on the letter's rarity. Here are the face values:  

```
1: AEILNORSTU  
2: DG  
3: BCMP  
4: FHVWY  
5: K  
8: JX  
10: QZ
```
Write a program that computes the value of a word by summing the values of its letters:  

```
Enter a word: pitfall  
Scrabble value: 12
```  
Your program should allow any mixture of lower-case and upper-case ltters in a word. Hint: Use the `toupper` library function.

### Solution

```c
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
```
