#include <stdio.h>
int main()
{
    float numerator, denominator, sum = 0;
    printf("\nEnter The numerator  ");
    scanf("%f", &numerator);
    printf("\nEnter The denominator  ");
    scanf("%f", &denominator);
    if (denominator != 0)
    {
        sum = numerator / denominator;
        printf("\nDivision Is %f", sum);
    }
    else
        printf("Denomiter Cannot be zero");
        return 0;
}