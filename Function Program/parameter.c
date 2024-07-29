#include <stdio.h>

void add(int a, int b)
{
    int sum = a + b;
    printf("Addition is:%d\n", sum);
}
void sub(int a, int b)
{
    int sub = a - b;
    printf("subtraction is:%d\n", sub);
}
void mul(int a, int b)
{
    int sub = a * b;
    printf("multliplication is:%d\n", sub);
}
void div(int a, int b)
{

    int sub = a / b;
    printf("division is:%d\n", sub);
}

int main()
{
    int num1, num2;
    printf("\nEnter the number1 And number2:");
    scanf("%d%d", &num1, &num2);
    add(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    div(num1, num2);
    return 0;
}