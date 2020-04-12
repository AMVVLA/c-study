### Project 7.08

Modify Programming `Project 8` from `Chapter 5` so that the user enters a time using the 12-hour clock. The input will have the form hours:minutes followed by either `A`, `P`, `AM`, or `PM` (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:

```
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
```
You may assume that the input has one of these forms; there is no need to test for errors.


### Solution

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
    int hour;
    int minute;
    int time;
    char apm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &apm);
    if(toupper(apm) == 'P')
    {
        if(hour != 12)
            hour = hour + 12;
    }
    else if(toupper(apm) == 'A')
    {
        if(hour == 12)
            hour = hour - 12;
    }
    time = (hour * 60) + minute;
    if(time >= 0 && time <= 1440)
    {
        if(time <= 480 + ( 583 - 480) / 2) 
             printf("Closest departue time is  8:00 a.m., arriving at  10:16 a.m.\n");
        else if(time < 583 + (679 - 583) / 2)
             printf("Closest departue time is  9:43 a.m., arriving at  11:52 a.m.\n");
        else if(time < 679 + (767 - 679) / 2)
             printf("Closest departue time is  11:19 a.m., arriving at  1:31 p.m.\n");
        else if(time < 767 + (840 - 767) / 2)
             printf("Closest departue time is 12:47 p.m., arriving at  3:00 p.m.\n");
        else if(time < 840 + (945 - 840) / 2)
             printf("Closest departue time is 2:00 p.m., arriving at  4:08 p.m.\n");
        else if(time < 945 + (1140 - 945) / 2)
             printf("Closest departue time is  3:45 p.m., arriving at 5:55 p.m.\n");
        else if( time <= 1140 + (1305 - 1140) / 2)
             printf("Closest departue time is  7:00 p.m., arriving at 09:20 p.m.\n");
        else
             printf("Closest departue time is  9:45 p.m., arriving at 11:58 p.m.\n");
    }
    else
        printf("error\n");
    return (0);   
}
```
