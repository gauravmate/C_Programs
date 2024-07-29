#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter The Number Of A And B");
    scanf("%f%f", &a, &b);

    c = a + b;
    printf("\nAddition is%f", c);
    c = a - b;
    printf("\nSubtraction is%f", c);
    c = a * b;
    printf("\nMultiplication is%f", c);
    c = a / b;
    printf("\nDivision is%f", c);
}