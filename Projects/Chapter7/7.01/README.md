## Project 7.01

The square2.c program of Section 6.3 will fail (usually by printing strange answers) if i * i exceeds the maximum int value. Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. (Don't forget to update the conversion specifications in the call of printf!) Then try long. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?

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

## Answer
smallest value of n that causes failure is as below.

int = 46341, 32bit  
short = 182, 16bit  
long = 3037000500, 64bit  
