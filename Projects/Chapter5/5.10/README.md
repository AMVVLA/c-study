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
    int grade;
    printf("Enter numberical grade: ");
    scanf("%d", &grade);

    if(grade>100 || grade<0)
    grade = -10;
  
    switch(grade/10) {
        case 10: case 9:
        printf("Letter Grade A");
        break;
        case 8:
        printf("Letter Grade B");
        break;
        case 7:
        printf("Letter Grade C");
        break;
        case 6:
        printf("Letter Grade D");
        break;
        case 5: case 4: case 3: case 2: case 1: case 0:
        printf("Letter Grade F");
        break;
        default:
        printf("error");
        break;
    }
   return 0;
}
```
