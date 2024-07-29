#include <stdio.h>
int main()
{
    int cprice, sprice, result;
    printf("Enter the Cost price And selling Price\n");
    scanf("%d%d", &cprice, &sprice);
    if (sprice > cprice)
    {
        result = sprice - cprice;
        printf("Profit %d", result);
    }
    else if (cprice > sprice)
    {
        result = cprice - sprice;
        printf("loss%d", result);
    }
}