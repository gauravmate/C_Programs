#include <stdio.h>

int div()
{
    int num1 = 25, num2 = 5;
    int mul = num1 / num2;
    return mul;
}
int mul()
{
    int num1 = 5, num2 = 5;
    int mul = num1 * num2;
    int value = div();
    printf("division is:%d\n", value);
    return mul;
}
int sub()
{
    int num1 = 6, num2 = 4;
    int sub = num1 - num2;
    int value = mul();
    printf("multliplication is:%d\n", value);
    return sub;
}

int add()
{
    int num1 = 5, num2 = 5;
    int add = num1 + num2;
    int value = sub();
    printf("Subtraction is:%d\n", value);
    return add;
}

int main()
{

    // add();
    int value = add();
    printf("Addition is:%d\n", value);
}