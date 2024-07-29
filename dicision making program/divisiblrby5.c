#include <stdio.h>
int main()
{
    int number;
    printf("\nEnter The Numner");
    scanf("%d", &number);
    if (number % 5 == 0)
    {
        printf("\nIt is Divisible By 5");
    }
    else
        printf("\nIt is not Divisible by 5");
}