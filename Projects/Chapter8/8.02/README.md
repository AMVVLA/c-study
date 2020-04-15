### Project 8.02

Modify the `repdigit.c` program of Section 8.1 so that it prints a table showing how many times each digit appears in the number:
```
Enter a number: 41271092
Digit:        0 1 2 3 4 5 6 7 8 9
Occurrences:  1 2 2 0 1 0 0 1 0 1
```

### Solution

```c
#include <stdio.h>

int main()
{
	int arr[10] = {0}, digit, i;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);
	while(n > 0)
	{
		digit = n % 10;
		arr[digit]++;
		n /= 10;
	}
	printf("Digit:\t\t0	1	2	3	4	5	6	7	8	9\n");
	printf("Occurrences:\t");
	for(i = 0; i < 10; i++)
		printf("%d\t", arr[i]);
	printf("\n");
	return 0;
}
```
