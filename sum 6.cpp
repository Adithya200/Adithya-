#include<stdio.h>
float interest (int p,int n)
{ char ch[1];
  printf ("are you a senior citizen(y/n):");
  scanf ("%s",&ch);
  float si,r;
  if (strcmp("y",ch)==0)
  { r=12;
  }
  else if (strcmp("n",ch)==0)
  { r=10;
  }
  si=p*r*n/100.0;
  return si;
}
 main()
 { 
  int p,n;
  float r,Z;
     printf ("Enter principal Amount :");
     scanf ("%d",&p);
     printf ("enter time period :");
     scanf ("%d",&n);
     if (p>0&&n>0)
     { Z=interest(p,n);
       printf ("\n Simple interest :%f\n",Z);
	 }
	 else 
	 { printf ("invalid input");
	 }
 }
