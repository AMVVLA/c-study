#include <stdio.h>

int main()
{
	char apb;		
	printf("Enter phone number:");
	while((apb = getchar()) != '\n')
	{
		if(apb >= 'A' && apb <= 'Z')
		apb = (apb - 59) / 3 + 48;
		putchar(apb);
		
	}
	putchar('\n');
	return 0;
}

