#include <stdio.h>

int main()

{
    int i;
    int j;
    
    printf("Enter a 24-hour Time: ");
    scanf("%d:%d", &i, &j);
    if(i>=0 && i<=12)
    printf("Equivalent 12-hour time: %d:%d AM", i, j);
    else if(i>=13 && i<=23)
     printf("Equivalent 12-hour time: %d:%d PM", i-12, j);

return 0;
}