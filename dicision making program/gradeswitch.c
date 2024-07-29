#include <stdio.h>
int main()
{

    char grade;

    printf("Enter A grade (A,B,C,D,F)\n");
    scanf("\n%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("\3Excellent");
        break;
    case 'B':
        printf(" \3Very Good");
        break;
    case 'C':
        printf("\3Good");
        break;
    case 'D':
        printf("\3Average");
        break;
    case 'F':
        printf("\3Poor");
        break;

    default:
        printf("\3Inccorect Choice");
        break;
    }
}
