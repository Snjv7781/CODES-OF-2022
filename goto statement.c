#include <stdio.h>

int main()
{
    int num, i= 0 , j=0 ;
    
     for(i; i < 8; i++)
    {
        printf("%d\n", i);
        for(j; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:
    return 0;
}


