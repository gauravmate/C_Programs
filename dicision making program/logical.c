#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    if (number >= 1 && number <= 100)
    {
        printf("In the Range");
    }
    else
        printf("Not in range");
}