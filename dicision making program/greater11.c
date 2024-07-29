#include <stdio.h>
int main()
{
    int number,num2;
    printf("\nEnter the number 1 and 2");
    scanf("%d%d",&num2, &number);
    if (number > 11 || num2 <45)
    {
        printf("\n in a range of 11 to 45");
    }
    else
        printf("\n in not a range of 11 to 45");
}