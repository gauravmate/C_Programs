#include <stdio.h>
int main()
{
    float redius, area, PI =3.14;
    printf("Enter the redius ");
    scanf("%f", &redius);
    area = PI * redius * redius;
    printf("Area Of Circle Is %f", area);
}