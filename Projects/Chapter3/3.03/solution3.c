#include <stdio.h>

int main()
{
int GS1;
int identifier;
int code;
int number;
int digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &identifier, &code, &number, &digit);
    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code : %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit:%d\n", digit);

return 0;

}