#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,n;
  printf ("enter the no of rows :");
  scanf ("%d",&n);
  for (i=1;i<=n;i++)
  { printf (" ");
  }
  for (j=n;j>i;j--)
  { for (j=i;j>=1;j--)
    { printf ("%d",j);
	}
  }
  printf ("\n");
  return 0;
}
