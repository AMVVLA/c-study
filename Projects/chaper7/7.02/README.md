## Project 7.02

Modify the `square2.c` program of `Section 6.3` so that it pauses after every 24 squares and displays the following message:

`Press Enter to continue...`  
After displaying the messag, the program should use `getchar` to read a character. `getchar` won't allow the program to continue until the user presses the Enter key.

## Solution  

```c
#include <stdio.h>

int main()
{
	long i, n;

	printf("This program prints a table of squares. \n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	for(i = 1; i <= n; i++)
		printf("%20ld%20ld\n", i, i * i);

	return 0;
}
```
