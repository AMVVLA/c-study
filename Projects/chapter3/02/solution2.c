#include <stdio.h>

int main()
 {
   int item;
   int dd;
   int mm;
   int yyyy;
   float price;

   printf("Enter item number: ");
   scanf("%d", &item);
   printf("Enter unit price: ");
   scanf("%f", &price);
   printf("Enter purchase date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &mm,&dd,&yyyy);
   printf("Item\t\tunit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%.2d/%d", item, price, mm, dd, yyyy);
   return 0;
 }