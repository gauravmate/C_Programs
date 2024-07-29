#include <stdio.h>
void reveres()
{
    int array[6] = {3, 4, 5, 6, 7, 8};
    for (int i = 5; i >= 0; i--)
    {
        printf("%d", array[i]);
    }
}
int main()
{
    reveres();
}