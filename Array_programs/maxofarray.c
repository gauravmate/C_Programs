#include <stdio.h>
void max()
{
    int arr[5]={8,7,11,5,4}; 
    int i;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("\nEnter value for element %d: ", i);
    //     scanf("%d", &arr[i]);
    //    // printf("%d",arr[i]);
    // }
    int max = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\n Max number is:%d", max);
}
int main()
{
    max();
}