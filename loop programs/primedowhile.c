#include <stdio.h>
int main()
{

    int num = 15, i = 2,temp=0;
    do
    {
        if (num % i == 0)
        {
            printf("It is not prime number:");
            
            break;
        }
        else
        {
            if (temp)
            {
             printf("It is a prime number:");
                
            }
            
           
        }
        i++;
    } while (i < num - 1);
}