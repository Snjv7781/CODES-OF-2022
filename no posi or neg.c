#include<stdio.h>
main()
{
	int x;
	printf("enter a number \n whatever you want");
	scanf("%d", &x);
	
	if(x>0)
	{
		printf("positive number");
	}
	if (x<=0)
	{
		printf("non positive");
	}
}
