#include <stdio.h>
void div()
{
    int temp[5] = {1, 2, 3, 4, 5};
    int j = 3;
    for (int i = 0; i < 5; i++)
    {
        temp[i] *= j;
        printf("%d\n", temp[i]);
    }
    // printf("\n");
}
int main()
{
    div();
}
