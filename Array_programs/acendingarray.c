#include <stdio.h>
void acending()
{
    int marks[5] = {97, 86, 46, 64, 54};
    int i, j;
    for (i = 0; i < 5 ; i++)
    {
        for (j = i+1; j < 5 ; j++)
        {
            if (marks[j] < marks[j + 1])
            {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n Array is:%d", marks[i]);
    }
}
int main()
{
    acending();
}

