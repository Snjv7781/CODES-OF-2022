#include<stdio.h>
main()
{
	int i=1,x;
	while(i<=6)
	{
		printf("ENTER A NUMBER");
		scanf("%d",&x);
		if(x>0)
		break;
		i++;
	}
	i==6?printf("ends normally"):printf("applied break");
}
