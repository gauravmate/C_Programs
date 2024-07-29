#include <stdio.h>
void merge()
{
    int array1[5], array2[10], merge1[15];
    int i;
    printf("\nEnter the array1:");
    for (i = 0; i < 5; i++)
    {

        scanf("\n%d", &array1[i]);
    }
    printf("\nEnter the array2:");
    for (i = 0; i < 10; i++)
    {
        scanf("\n%d", &array2[i]);
    }
    merge1[15] = array1[i] + array2[i];
    for (int j = 0; j < 15; j++)
    {
        printf("\n%d", merge1[j]);
    }
}

int main()
{
    merge();
}
