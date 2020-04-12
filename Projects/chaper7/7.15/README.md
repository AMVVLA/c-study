### Project 7.15
Write a program that computes the factorial of a positive integer:
```
Enter a positive integer: 6
Factorial of 6: 720
```
(a) Use a `short` variable to store the value of the factorial. What is the largest value of n for which the program correctly prints the factorial of n?  
(b) Repeat part (a), using an `int` variable instead.  
(c) Repeat part (a), using a `long` variable instead.  
(d) Repeat part (a), using a `long long` variable instead (if your compiler supports the `long long` type.  
(e) Repeat part (a), using a `float` variable instead.  
(f) Repeat part (a), using a `double` variable instead.  
(g) Repeat part (a), using a `long double` variable instead.  

In cases (e)-(g), the program will display a close approximation of the factorial, not necessarily the exact value

### Solution

```c
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
```  

a. short : 15  
b. int: 16  
c. long : 25  
d. long long : 25  
e. float : 34  
f. long : 170  
g. long double : 1754  
