#include <stdio.h>

int main()
{
	int fac, num, num2;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	fac = num;
	num2 = num;
	while(num > 1)
		fac *= --num;
	printf("factiroal of %d: %d", num2, fac);
	return 0;
}


