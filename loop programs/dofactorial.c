#include <stdio.h>
void main()
{
    int fact = 1, num ;
    printf("Enter the number:\n");
    scanf("%d",&num);
    do
    {
        fact = fact * num;
        num--;
    } 
    while (num > 1);
    printf("\n Fcatorial is:%d", fact);
}