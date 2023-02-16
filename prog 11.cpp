#include <stdio.h>
int main()
{ int n,i;
  float num,sum=0.0,avg;
  printf ("enter the number of elements :");
  scanf ("%d",&n);
  for (i=0;i<n;i++)
  { printf ("enter the numeber :");
    scanf ("%f",&num);
    sum +=num;
  }
  avg =sum/n;
  printf ("sum= %.2f,avg =%.2f",sum,avg);
  return 0;
}
