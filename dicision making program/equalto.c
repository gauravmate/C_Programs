#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("\nEnter the number1 , number2 And Number3 ");
    scanf("%d%d%d", &number1, &number2, &number3);
    if (number1 == number2)
    {
        printf("\nIt is equal");
    }
    else if (number1 == number3)
    {
        printf("\nIt is equal");
    }
    else
        printf("\nit is not equal");
}