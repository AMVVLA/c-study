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
		ch = toupper(ch);
		if(ch == 'A' || 'E' || 'I' || 'L' || 'N' || 'O'|| 'R' || 'S' || 'T' || 'U')
			ch = 1;
		else if(ch == 'D' || 'G') 
			ch = 2;
		else if(ch == 'B' || 'C' || 'M' || 'P')
			ch = 3;
		else if(ch == 'F' || 'H' || 'V' || 'W' || 'Y') 
			ch = 4;
		else if(ch == 'K')
			ch = 5;
		else if(ch == 'J' || 'X') 
			ch = 8;
		else if(ch == 'Q' || 'Z')
			ch = 10;
		sum += ch;
	}
	printf("Scrabble value:%d\n", sum);
	return 0;
}
