### Project 8.06

The prototypical Internet newbie is a fellow named BIFF, who has a unique way of
writing messages. Here's a typical BIFF communiqué:

```
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Write a "BIFF filter" that reads a message entered by the user and translates it
into BIFF-speak:

```
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
```

Your program should convert the message to upper-case letters, substitute digits
for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so
exclamation marks. *Hint*: Store the original message in an array of characters,
then go back through the array, translating and printing characters one by one.


### Solution

```c
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
```
