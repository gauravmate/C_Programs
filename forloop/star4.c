#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        // Printing spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Printing stars
        for (int j = i; j < 5; j++)
        {
            if (j == i || j == 5-1 || i == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--)
    {
        // Printing spaces
        for (int j = i; j >= 1; j--)
        {
            printf(" ");
        }
        // Printing stars
        for (int j = i; j < 5; j++)
        {
            if (j == i || j == 5-1 || i == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
