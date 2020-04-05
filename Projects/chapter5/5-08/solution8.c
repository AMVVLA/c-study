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
        
 