#include <stdio.h>

int main()
{
    
int i;
printf("Enter a Three-digit number: ");
scanf("%d", &i);
printf("The reversal is: %d%d%d", i%10 ,i%100/10, i/100);
return 0;

}