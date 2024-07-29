#include <stdio.h>
void fibo()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);

    for (int i = 3; i <= 10; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
}

int main()
{
    fibo();
}
