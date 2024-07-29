#include <stdio.h>
int main()
{

    int number1, number2, number3;

    printf("Enter the Frist Number1\n");
    scanf("%d", &number1);
    printf("Enter the Second Number2\n");
    scanf("%d", &number2);
    printf("Enter the Third Number3\n");
    scanf("%d", &number3);

    printf("Address:%d\n", &number1);
    printf("Address:%d\n", &number2);
    printf("Address:%d\n", &number3);
}