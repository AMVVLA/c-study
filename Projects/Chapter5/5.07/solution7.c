#include <stdio.h>

int main()
{
    int a, b, c, d, big, small;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
     if(a>b&&a>c&&a>d)
     big = a;
     else if(b>a&&b>c&&b>d)
     big = b;
     else if(c>a&&c>b&&c>d)
     big = c;
     else if(d>a&&d>b&&d>c)
     big = d;

    if(a<b&&a<c&&a<d)
     small = a;
     else if(b<a&&b<c&&b<d)
     small = b;
     else if(c<a&&c<b&&c<d)
     small = c;
     else if(d<a&&d<b&&d<c)
     small = d;
     
  printf("largest: %d\nsmallest: %d", big, small);

  return 0;
}