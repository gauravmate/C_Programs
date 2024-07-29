#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Age of Candidate");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("It is Eligible for cast");
    }
    else
        printf("it is nit eligible for cast");
}