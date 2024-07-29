#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        printf("\n");
        for (int j = i; j >= 1; j--)
        {
            if (i == 5 || j == 1 || i==1)
            {

                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
    }
}
