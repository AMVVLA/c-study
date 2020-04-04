### Project 5.01

Write a program that calculates how many digits a number contains:
```
Enter a number: 374
The number 374 has 3 digits
```
You many assume that the number has no more than four digits. Hint: Use `if` statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.

### Solution

```c
#include <stdio.h>

int main()
{
int i; 
printf("Enter a number :");
scanf("%d", &i);

if(i>=0 && i<10)
 printf("your number %d has 1digits", i);
else if (i>=10 &&i<100)
 printf("your number %d has 2digits", i);
else if (i>=100 && i<1000)
 printf("your number %d has 3digits", i);

return 0;

}
```
