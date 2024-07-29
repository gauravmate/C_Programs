#include <stdio.h>
void swap(int *num1, int *num2)
{

    int swap1;
    swap1 = *num1;
    *num1 = *num2;
    *num2 = swap1;

    printf("%d\n%d", num1, num2);
}
int main()
{

    int num1=5, num2=6;
    // printf("Enter the number:\n");
    // scanf("%d%d",&num1,&num2);
    swap(&num1, &num2);
    printf("\nnumber1 is:%d\nnumber2 is :%d", num1, num2);
}