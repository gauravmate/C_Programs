#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the Three Number\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 == num2 && num1 == num3)
    {
        printf("\3All Are the same\3 ");
    }

    else if (num1 >= num2 && num1 >= num3)
    {
        printf("\nNum1 is grether:%d \3", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("\nNum2 is grether:%d \3", num2);
    }
    else
        printf("\nNum3 is grether:%d \3", num3);
}