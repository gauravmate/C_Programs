#include <stdio.h>
int main()
{
    int num = 2, i , j;
    printf("Multiplication Table of %d:\n", num);
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            
            num = i*j;
            printf("%d x %d=%d\n", i, j,num);
        }
       // printf("\t");
    }
}
    
    // while (i <= 10)
    // {

    //     mul = num * i;
    //     printf("%d x %d=%d\n", num, i, mul);
    //     i++;
    // }
