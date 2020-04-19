### Project 5.08
The following table shows the daily flights from one city to another:

| Departure time | Arrival time |
| ---: | ---: |
| 8:00 a.m. | 10:16 a.m. |
| 9:43 a.m. | 11:52 a.m. |
| 11:19 a.m. | 1:31 p.m. |
| 12:47 p.m. | 3:00 p.m. |
| 2:00 p.m. | 4:08 p.m. |
| 3:45 p.m. | 5:55 p.m. |
| 7:00 p.m. | 9:20 p.m. |
| 9:45 p.m. | 11:58 p.m. |

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
```
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
```
*Hint:* Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, `13:15` is `13 * 60 + 15 = 795` minutes since midnight, which is closer to `12:47 p.m.` (`767` minutes since midnight) than to any of the other departure times.


### Solution
```c
#include <stdio.h>

int main()
{
    int hour;
    int minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    int time = (hour * 60) + minute;
    if(time >= 0 && time <= 1440)
    {
        if(time > (945 + 1140) / 2 && time <= (1140 + 1305) / 2) 
             printf("Closet departue time is  7:00 p.m., arriving at  9:20 p.m.");
        else if(time > (840 + 945) / 2 && time <= (945 + 1140) / 2)
             printf("Closet departue time is  3:45 p.m., arriving at  5:55 p.m.");
        else if(time > (767 + 840) / 2 && time <= (840 + 945) / 2)
             printf("Closet departue time is  2:00 p.m., arriving at  4:08 p.m.");
        else if(time > (679 + 767) / 2 && time <= (767 + 840) / 2)
             printf("Closet departue time is 12:47 p.m., arriving at  3:00 p.m.");
        else if(time > (583 + 679) / 2 && time <= (679 + 767) / 2)
             printf("Closet departue time is 11:19 a.m., arriving at  1:31 p.m.");
        else if(time > (480 + 583) / 2 && time <= (583 + 679) / 2)
             printf("Closet departue time is  9:43 a.m., arriving at 11:52 a.m.");
        else if(time > 173  && time <= (480 + 583) / 2)
             printf("Closet departue time is  8:00 a.m., arriving at 10:16 a.m.");
        else
             printf("Closet departue time is  9:45 p.m., arriving at 11:59 p.m.");
    }
    else
        printf("error");
    return (0);   
}
```
