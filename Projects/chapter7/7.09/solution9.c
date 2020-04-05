#include <stdio.h>
#include <ctype.h>
int main()
{
    int hour, minute;
    char apm;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &apm);
    if(toupper(apm) == 'P')
    {
        if(hour != 12)
            hour += 12;
    }
    else if(toupper(apm) == 'A')
    {
        if(hour == 12)
            hour -= 12;
    }
    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);
    return 0;
}
