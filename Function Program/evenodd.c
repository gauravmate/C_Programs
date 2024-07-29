#include <stdio.h>

int evenodd(int num1)
{

    if (num1 % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    // evenodd();
    int num1;
    printf("\nEnter the number:");
    scanf("%d", &num1);
    
    int result=evenodd(num1);
    printf("\n The return value is:%d",result);
    return 0;
}