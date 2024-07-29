#include <stdio.h>
void vowel()
{
    char str[] = {'g', 'a', 'u', 'r', 'a', 'v', '\0'};
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {

            printf("%c", str[i]);
            count++;
        }
        i++;
    }
    printf(":%d\n", count);
}
int main()
{
    vowel();
}