#include <stdio.h>
int squar(int num1)
{
    int squar = num1 * num1;
    return squar;
    //return 1;
}
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    int value = squar(number);
    printf("\n%d", value);
}
