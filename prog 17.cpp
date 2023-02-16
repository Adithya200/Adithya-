#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ int a,b,c,s=0;
  printf ("enter the number :\t");
  scanf ("%d",&a);
  c=a;
  while (a > 0)
  {
  	b=a%10;
  	s=(s*10)+b;
  	a=a/10;
  }
  if (s==c)
  { printf ("the number %d is a palindrome",c);
   }
  else 
  { printf ("the number %d is not a palindrome",c);
  }
}
