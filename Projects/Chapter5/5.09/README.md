### Project 5.08
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:

```
Enter first date (mm/dd/yy): 3/6/08
Enter second date ((mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
```

### Solution
```c
#include <stdio.h>
int main()

{
    int day, month, year, day2, month2, year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month, &day, &year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month2, &day2, &year2);

    if(year<year2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month, day, year, month2, day2, year2);
    else if(year>year2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month2, day2, year2, month, day, year);
    else if(month<month2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month, day, year, month2, day2, year2);
    else if(month>month2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month2, day2, year2, month, day, year);
    else if(day<day2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month, day, year, month2, day2, year2);
    else if(day>day2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month2, day2, year2, month, day, year);
    else
        printf("%d/%d/%.2d is equal to %d/%d/%.2d", month, day, year, month2, day2, year2);
        
return 0;
}
```
