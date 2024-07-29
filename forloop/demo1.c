#include <stdio.h>

int main() {
    int num1, num2, result;
    int choice;

    do {
        printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Do you want continue \n 6.Exit \n Enter Your choice: \n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        } else if (choice > 6 || choice < 1) {
            printf("Invalid Choice\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Addition is: %d\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Subtraction is: %d\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Multiplication is: %d\n", result);
                break;

            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Division is: %d\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;

            case 5:
                do {
                    printf("Do you want to continue? (1: Yes, 2: No): ");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        choice = 0; // Set choice to 0 to show the main menu again
                    } else if (choice == 2) {
                        choice = 6; // Set choice to 6 to exit the main loop
                    } else {
                        printf("Invalid Choice\n");
                    }
                } while (choice != 0 && choice != 6);
                break;

            case 6:
                printf("Program is Terminated\n");
                break;

            default:
                printf("Invalid Choice\n");
                break;
        }

        // Display only option 5 and 6 after an arithmetic operation
        if (choice >= 1 && choice <= 4) {
            do {
                printf(" 5.Do you want to continue \n 6.Exit \n Enter Your choice: \n");
                scanf("%d", &choice);
                if (choice != 5 && choice != 6) {
                    printf("Invalid Choice\n");
                }
            } while (choice != 5 && choice != 6);
        }

    } while (choice != 6);

    return 0;
}
