#include<stdio.h>
int main ()
{
	char moments;
	printf("enter your word  \n ");
	scanf("%c,&moments");
	
	switch(moments)
	{
	
		case 'leaving'
		printf("hard to manage \n ");
		break;
		
		case 'moments':
		printf("full of life \n");
		break;
		
		case 'friend':
		printf("fair weathered friend\n");
		break;
		
		default:
			printf("life is full of phases which you have to face\n");
    }

}
