### Project 8.08
Modify Programming Project 7 so that it prompts for five quiz grades for each of
five students, then computes the total score and average score for each student,
and the average score, high score, and low score for each quiz.

### Solution

```c
#include <stdio.h>

int main()
{
	int i, j, sum, high, low;
	int arr[5][5];

	for(i = 0; i <= 4; i++)
	{
		printf("Enter five quiz grade of student %d: ", i + 1);
		for(j = 0; j <= 4; j++)
			scanf("%d", &arr[i][j]);
	}
		for(i = 0; i <= 4; i++)
		{
			sum = 0;
			printf("\nTotal and average score for student %d: ", i + 1);
			for(j = 0; j <= 4; j++)
				sum += arr[i][j];
			printf("%3d %.2f",sum, (float)sum /5);
		}
		printf("\n");
		for(i = 0; i <= 4; i++)
		{
			printf("\nAverage, Highest, Lowest score for quiz %d: ", i + 1 );
			sum = 0;
			high = low = arr[0][i];
			for(j = 0; j <= 4; j++)
			{
				sum += arr[j][i];
				if(arr[j][i] > high)
					high = arr[j][i];
				if(arr[j][i] < low)
					low = arr[j][i];
			}
			printf("%.2f %3d %3d",(float)sum / 5, high, low);
		}
	return 0;
}
```
