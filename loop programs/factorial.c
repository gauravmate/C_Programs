#include <stdio.h>
int main()
{
    int num=5, fact=1;
    // printf("Enter the number");
    // scanf("%d", num);
    while (num > 1)
    {
        fact = fact * num;
        num--;
    }
    printf("Fcatorial Number is:%d", fact);
}