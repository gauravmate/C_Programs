#include <stdio.h>
void swap(int *num1, int *num2)
{

    // printf("%d\n%d", num1, num2);
    *num1 = *num1 + *num2; // 20+10=30 num1 is 30
    *num2 = *num1 - *num2; // 30-10=20 num2 is 20
    *num1 = *num1 - *num2; // 20-30=10 num1 is 10

    printf("%d\n%d", num1, num2);
}
int main()
{
    int num1, num2;
    printf("\nEnter the number1 and number2:");
    scanf("%d%d",&num1,&num2);
    swap(&num1, &num2);
    printf("\nnumber1 is:%d\nnumber2 is :%d", num1, num2);
}
