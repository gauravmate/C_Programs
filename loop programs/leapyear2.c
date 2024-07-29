#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
    {
        printf("It is leap year%d\n", year);
    }
    else
    {
        printf("It is not leap year%d\n", year);
    }
}