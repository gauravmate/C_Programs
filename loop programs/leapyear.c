#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\n It is a leap Year%d", year);
            }
            else
            {
                printf("\n it is not a leap year%d", year);
            }
        }
        else
        {
            printf("\n it is a leap year%d", year);
        }
    }
    else
    {
        printf("\n it is not a leap year%d", year);
    }
    return 0;
}