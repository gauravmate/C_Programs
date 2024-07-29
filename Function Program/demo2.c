#include <stdio.h>
int number(int num)
{
    num = num + 10;
    printf("Number is :%d\n", num);
}
int main(int a)
{
    int num=10;
    number(num);
    
    // int num = 5;
    // int *ptr;
    // ptr = &num;
    // printf("\nAddress of number:%d", &num);
    // printf("\npointer value is:%d", &ptr);
    // printf("\nValue of number:%d", num);
    // printf("\npointer address is:%d", &ptr);
}