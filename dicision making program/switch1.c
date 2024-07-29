#include <stdio.h>
int main()
{

    int age;
    char c;
    printf("Enter The Age\n");
    scanf("%d", &age);
    printf("Enter The Gender\n");
    scanf(" %c", &c);

    if (age > 25)
    {
        if (c == 'f')
        {
            printf("Eligible For Policy 1\n");
        }
    }
    if (age > 25)
    {
        if (c == 'm')
        {
            printf("Eligible For Policy 2\n");
        }
    }
    else
        printf("Eligible for policy 3\n");
    return 0;
}