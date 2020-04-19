### Project 5.10

Using the `switch` statement, write a program that converts a numerical grade into a letter grade:
```
Enter numerical grade: 84
Letter grade: B
```

Use the following grading scale: `A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.`   
Print an error message if the grade is larger than `100` or less than `0`. *Hint:* Break the grade into two digits, then use a `switch` statement to test the ten's digit.

### Solution
```c
#include <stdio.h>

int main()
{
    int ten;
    int num;

    printf("Enter a two-digit number:");
    scanf("%d", &num);

    if (num >= 20 || num < 10)
    {
        switch(num / 10)
        {
            case 2:printf("twenty");
            break;
            case 3:printf("thirty");
            break;
            case 4:printf("fourty");
            break;
            case 5:printf("fifty");
            break;
            case 6:printf("sixty");
            break;
            case 7:printf("seventy");
            break;
            case 8:printf("eighty");
            break;
            case 9:printf("ninety");
            break;
        }
        if(num > 20 && num % 10 != 0)
            printf("-");
        switch(num % 10)
        {
            case 1:printf("one");
            break;
            case 2:printf("two");
            break;
            case 3:printf("three");
            break;
            case 4:printf("four");
            break;
            case 5:printf("five");
            break;
            case 6:printf("six");
            break;
            case 7:printf("seven");
            break;
            case 8:printf("eight");
            break;
            case 9:printf("nine");
            break;
        }
    }
    else
     switch(num % 10)
        {
            case 0:printf("ten");
            break;
            case 1:printf("eleven");
            break;
            case 2:printf("twelve");
            break;
            case 3:printf("thirteen");
            break;
            case 4:printf("fourteen");
            break;
            case 5:printf("fifteen");
            break;
            case 6:printf("sisteen");
            break;
            case 7:printf("seventeen");
            break;
            case 8:printf("eighteen");
            break;
            case 9:printf("nineteen");
            break;
        }
    return 0;
}
```
