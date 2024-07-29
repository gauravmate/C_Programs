#include <stdio.h>
int main()
{
    int num =0, i = 2,temp=0;
    printf("enter the number:");
    scanf("%d", &num);

    while (i <num-1)
    {
        if (num % i == 0)
        {
            
            printf("It is not prime number:");
            int temp=0;
            break;
        }
        i++;
    }
        
        if(temp)
        {
            printf("it is prime number:");
         
        }
            
    
}