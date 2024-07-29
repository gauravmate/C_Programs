#include <stdio.h>
int main()
{
    int number1, number2, result;
    char operator;
    printf("Enter the 2 integer\n");
    scanf("%d%d", &number1, &number2);
    printf("Enter the operator");
    scanf("\n%c", &operator);
    switch (operator)
    {
    case '+':
        result = number1 + number2;
        printf("Sum of two number%d\n", result);

        break;
    case '-':
        result = number1 - number2;
        printf("mul of two number%d\n", result);

        break;
    case '*':

        result = number1 * number2;
        printf("sub of two number%d\n", result);

        break;
    case '/':
        if (number1 !=0 )
        {
            result = number1 / number2;
            printf("div of two number%d\n", result);
        }
        else printf("error");
        break;

    default:
        printf("please enter valid operator");
        break;
    }
}