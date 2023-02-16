#include<stdio.h>
#include<conio.h>
int main()
{   int num,i;
	printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("\n Factors of %d are\n", num);
    for(i = 1; i <= num/2; i++)
    {
    if(num%i == 0)
    printf(" %d\n", i);
    }
}

