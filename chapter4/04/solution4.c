#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&i);
    printf("In octal, your number is: %d%d%d%d%d", i/8/8/8/8%8, i/8/8/8%8, i/8/8%8, i/8%8, i%8);
}