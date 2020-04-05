#include <stdio.h>

int main()
{
int i; 
printf("Enter a number :");
scanf("%d", &i);

if(i>=0 && i<10)
 printf("your number %d has 1digits", i);
else if (i>=10 &&i<100)
 printf("your number %d has 2digits", i);
else if (i>=100 && i<1000)
 printf("your number %d has 3digits", i);

return 0;

}
