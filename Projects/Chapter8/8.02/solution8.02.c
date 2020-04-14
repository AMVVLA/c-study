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
