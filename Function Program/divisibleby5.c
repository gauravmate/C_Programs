#include <stdio.h>

void div()
{
    int num = 6;
    if (num % 5 == 0)
    {
        printf("It is divisible by 5:");
    }
    else
    {
        printf("It is not divisible by 5:");
    }
}

int main(int num)
{
    div();

    return 0;
}
