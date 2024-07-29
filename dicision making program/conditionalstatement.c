#include <stdio.h>
int main()
{

    int a;
    printf("\nEnter The Value of A ");
    scanf("%d", &a);
    if (a >= 60)
    {
        printf("\nYou are eligible for Exam");
    }
    else
        printf("\nYou are not eligible for exam");
}