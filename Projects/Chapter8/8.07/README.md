### Project 8.07
Write a program that reads a 5 x 5 array of integers and then prints the row
sums and the column sums:

```
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
```

### Solution

```c
#include <stdio.h>

int main()
{
	int i, j, sum;
	int arr[5][5];

	for(i = 0; i <= 4; i++)
	{
		printf("Enter row %d: ", i + 1);
		for(j = 0; j <= 4; j++)
			scanf("%d", &arr[i][j]);
	}	
		printf("Row totals: ");
		for(i = 0; i <= 4; i++)
		{
			sum = 0;
			for(j = 0; j <= 4; j++)
				sum += arr[i][j];
			printf("%d ",sum);
		}
		printf("\nColum totals: ");
		for(i = 0; i <= 4; i++)
		{
			sum = 0;
			for(j = 0; j <= 4; j++)
				sum += arr[j][i];
			printf("%d ", sum);
		}
		printf("\n");
	return 0;
}
```
