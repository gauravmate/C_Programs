#include <stdio.h>
#include <string.h>
void caseul()
{

    // char name[] = "monster";
    // for (int i = 0; i < strlen(name); i++)
    // {
    //     if (name[i] >= "A" && name[i] <= "Z")
    //     {
    //         name[i] = name[i] + 32;
    //     }
    //     else if (name[i] >= "a" && name[i] <= "z")
    //     {
    //         name[i] = name[i] - 32;
    //     }
    
    //     printf("\n%s:", name);
    // }
    char str[] = "monster";
    printf("\nEnter the String:");
    // getc(str);
    scanf("%[^\n]", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {

            str[i] = str[i] + 32;
        }

        else if (str[i] >= 97 && str[i] <= 122)
        {

            str[i] = str[i] - 32;
        }
    }
    printf("\n%s:", str);
}

int main()
{
    caseul();
}
