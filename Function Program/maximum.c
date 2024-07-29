#include <stdio.h>

void max()
{
    int num1,num2;
    printf("Enter the number1 And number2:\n");
    scanf("%d%d", &num1,&num2);
    if(num1<num2)
    {
        printf("\nNumber2 is maximum%d\n",num2);
    }else {

    printf("\nNumber1 is maximum:%d\n", num1);
    }
}

int main()
{
    max();
    // return 0;
}
