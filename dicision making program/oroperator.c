#include <stdio.h>
int main()
{
    char g;
    printf("\nEnter A Character");
    scanf(" %c", &g);
    if (g == 'A' || g == 'a' || g == 'E' || g == 'e' || g == 'I' ||
        g == 'i' || g == 'O' || g == 'o' || g == 'U' || g == 'u')
    {
        printf("\n %c It Is a vowel",g);
    }
    else
        printf("\n%c It Is a consonant",g);
}