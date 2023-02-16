#include<stdio.h>
int main()
{
	int val,flag=0,a[10],i;
	printf("Enter the number to be searched");
	scanf("%d",&val);
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
		printf("%d",a[i]);
	for(i=0;i<9;i++)
		if(a[i]==val)
		{
			flag=1;
			printf("\nelement %d is found at %d",val,i+1);
		}

	if(flag==1)
		return 0;
	else
		printf("given number %d not found",val);
}
	
	

