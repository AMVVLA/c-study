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
