#include <stdio.h>
int main()
{
    int grade;
    printf("Enter numberical grade: ");
    scanf("%d", &grade);

    if(grade>100 || grade<0)
    grade = -10;
  
    switch(grade/10) {
        case 10: case 9:
        printf("Letter Grade A");
        break;
        case 8:
        printf("Letter Grade B");
        break;
        case 7:
        printf("Letter Grade C");
        break;
        case 6:
        printf("Letter Grade D");
        break;
        case 5: case 4: case 3: case 2: case 1: case 0:
        printf("Letter Grade F");
        break;
        default:
        printf("error");
        break;
    }
   return 0;
}