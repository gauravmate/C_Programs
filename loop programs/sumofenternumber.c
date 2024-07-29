#include <stdio.h>

int main()
{

    int number=1, sum = 0,i=1;

    printf("Enter the number: ");
    scanf("%d", &number);

    while (i <= number)
    {

        sum += i ;
        i++;
    }

    printf("Sum: %d\n", sum);

}
