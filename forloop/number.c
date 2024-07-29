#include <stdio.h>

int main()
{
    int i, j, number;
    printf("\nEnter the number:");
    scanf("%d", &number);
    for (i = number; i >= 1; i--)
    {

        for (j = 1; j < i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}


