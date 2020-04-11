#include <stdbool.h>
#include <stdio.h>

int main()
{
	bool digit_seen[10] = {false};
	int digit, i;
	int arr[10];
	long n;
	i = 0;

	printf("Enter a number: ");
	scanf("%ld", &n);
	while(n / 10 == 0)
	{
		digit = n % 10;
		if (digit_seen[digit])
			arr[i] = n % 10;
		digit_seen[digit] = true;
		n /= 10;
		i++;
	}

		printf("Repeated digit(s): %d" ,&arr );
	return 0;
}

