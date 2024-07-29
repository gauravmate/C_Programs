#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter Number1 And Number2");
    scanf("%d%d", &number1, &number2);
    int max = number1 > number2 ? number1 : number2;
    printf("\n Max Number%d", max);
    return 0;
}