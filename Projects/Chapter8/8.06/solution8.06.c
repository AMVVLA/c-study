#include <stdio.h>
#define MAX 100

int main()
{
	int i;
	char arr[MAX];

	i = 0;

	printf("Enter message: ");
	while((arr[i++] = getchar()) != '\n')
	;
	arr[i - 1] = '\0';
	for(i = 0; i < (char)(sizeof(arr) / sizeof(arr[0])); i++)
	{
		if(arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
		if(arr[i] == 65)
			arr[i] = 4 + '0';
		else if(arr[i] == 66)
			arr[i] = 8 + '0';
		else if(arr[i] == 69)
			arr[i] = 3 + '0';
		else if(arr[i] == 73)
			arr[i] = 1 + '0';
		else if(arr[i] == 79)
			arr[i] = 0 + '0';
		else if(arr[i] == 83)
			arr[i] = 5 + '0';
	}
	printf("In BIFF-speak: %s!!!!!!!!!!\n", arr);
	return 0;
}
