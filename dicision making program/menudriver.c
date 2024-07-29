#include <stdio.h>
int main()
{
    int num1, num2, result;
    int choice;
    printf(" 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n Enter Your choice: \n");
    scanf("\n%d", &choice);
    if ( choice <= 5)
    {
        printf("Enter a num1 And num2\n");
        scanf("%d%d", &num1, &num2);
    }
    else
    {
        printf("Invalid Choice");
    }

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Addition is:%d", result);

    case 2:
        result = num1 - num2;
        printf("suntraction is:%d", result);
        break;
    case 3:
        result = num1 * num2;
        printf("multiplication is:%d", result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Addition is:%d", result);
        }
        else
        {
            printf("Error");
        }

    default:
        break;
    }
}