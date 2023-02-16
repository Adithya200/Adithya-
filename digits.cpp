#include<stdio.h>
#include<conio.h>
int main()
{ int num;
 printf ("enter the number :");
 scanf ("%d ",&num);
  while(num != 0)
  {
        int digit = num % 10;
        num = num / 10;
        printf("%d\n", digit);
    }
    return 0;
}
