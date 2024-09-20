#include<stdio.h>
main()
{
	int x,y;  //x and y are two values that user will enter 
	printf("enter two number");
	scanf("%d %d",&x,&y);
	x>y ?x:y;
	printf("greater no is %d",x>y ?x:y);
}
