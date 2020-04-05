#include <stdio.h>
int main()

{
    int day, month, year, day2, month2, year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month, &day, &year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month2, &day2, &year2);

    if(year<year2)
        printf("%d/%d/%.2d is earlier than %d%d%.2d", month, day, year, month2, day2, year2);
    else if(year==year2){
          if(month<month2)
        printf("%d/%d/%.2d is earlier than %d%d%.2d", month, day, year, month2, day2, year2);
        else if(month==month2)
          if(day<day2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month, day, year, month2, day2, year2);
   else 
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month2, day2, year2, month, day, year);
    }else printf("%d/%d/%.2d is earlier than %d/%d/%.2d",  month2, day2, year2, month, day, year);

return 0;
}