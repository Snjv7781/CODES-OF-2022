 #include <stdio.h>
 int main ()
 {
 	int num,count=0;
 	printf("enter a number\n");
 	scanf("%d",&num);
    do{
 		printf("%d \n",count);
 		count=count+1;
	 }while(count<num);
	 return 0; 
 }
