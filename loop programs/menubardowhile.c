#include <stdio.h>
int main()
{
    int num1, num2, result;
    int choice;

    //printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division ");

    do
    {
        printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Do you want continue  \n 6.Exit  \n Enter Your choice: \n");
        scanf("\n%d", &choice);
        if (choice <= 4)
        {
            printf("Enter a num1 And num2\n");
            scanf("%d%d", &num1, &num2);
        }
        else
        {
            if (choice >= 7)
            {
                printf("Invalid Choice");
                //continue;
            }
        }
        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Addition is:%d\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("subtraction is:%d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("multiplication is:%d\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Division is:%d\n", result);
                break;
            }
            else
            {
                printf("Error");
            }
        case 5:
            printf("(1: Yes, 2: No):");
            scanf("%d", &choice);
            if (choice == 2)
            {
                choice = 6; 
            }
            break;

           
        case 6:
            printf("Program is Terminate.....!\n");
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }

    } while (choice != 6);
}
