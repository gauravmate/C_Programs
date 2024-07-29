#include <stdio.h>
#include <string.h>
int main()
{
    char name1[10] = "Monster";
    char name2[10] = "Monster";
    int temp;
    printf("%s\n", name1);
    printf("%s\n", name2);
    if (strlen(name1) == strlen(name2))
    {
        for (int i = 0; i < strlen(name1); i++)
        {
            if (name1[i] != name2[i])
            {
                temp = 0;
                printf("%d", temp);
                break;
            }
            if (temp)
            {
                printf("%d", temp);
            }
            // else {
            //     printf("%d",temp);
            // }
        }
    }
    else {
        printf("0");
    }
}
