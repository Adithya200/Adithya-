#include<stdio.h>
#include<conio.h>
int main()
{
    int N, i;
    printf("Enter the value of N (limit): ");
    scanf("%d", &N);
    printf("\n");
    printf ("the odd number of series are :");
    for(i=1; i<=N; i++)
    {
        if(i%2!=0)
            printf("%d ", i);
    }
    return 0;
}
