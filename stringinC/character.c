#include <stdio.h>
void charater()
{
    char name[] = {'G', 'a', 'u', 'r', 'a', 'v', '\0'};

    for (int i = 0; i < 8; i++)
    {
        printf("%c", name[i]);
    }
}
int main()
{
    charater();
}