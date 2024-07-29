#include <stdio.h>
int main()
{
    int number;
    printf("\nEnter the number");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("\nIt ia even Number");
    }
    else
        printf("\nIt is odd number");
}