#include <stdio.h>

int main()
{
    int num, reminder=0, revNumber=0;
    printf("\nEnter The NUmber:");
    scanf("%d", &num);
    while (num != 0)
    {
        reminder = num % 10;
        revNumber = revNumber * 10 + reminder;
        num = num / 10;
    }
    printf("\n Reveres Number is: %d", revNumber);
}
