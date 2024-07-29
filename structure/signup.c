#include <stdio.h>
#include <string.h>

struct signup {
    char username[30];
    char password[10];
};

void signup(struct signup *signup) {
    printf("\nEnter username for signup:\n");
    scanf("%s", signup->username);
    printf("\nEnter user password:\n");
    scanf("%s", signup->password);
}

int login(struct signup *log) {
    char userName[30];
    char pass[10];
    printf("\nEnter username for login:\n");
    scanf("%s", userName);
    printf("\nEnter password for login:\n");
    scanf("%s", pass);

    if (strcmp(userName, log->username) == 0 && strcmp(pass, log->password) == 0) {
        printf("\nLogin successful.... ");
        return 1;
    } else {
        printf("\nLogin failed. Incorrect username or password.\n");
        return 0;
    }
}

int main() {
    struct signup sign;
    int choice;

    printf("\n1. Signup \n2. Login \n3. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            signup(&sign);
            printf("\nUsername: %s\n", sign.username);
            printf("Password: %s\n", sign.password);
            break;
        case 2:
            if (login(&sign)) {
                printf("\nWelcome, %s!\n", sign.username);
            }
            break;
        case 3:
            printf("\nProgram is Terminate\n");
            break;
        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
