#include <stdio.h>
#include <string.h>
void function()
{
    char name[20] = "Gaurav";
    char name1[10];
    char name3[40];

    strcpy(name3, strcpy(name1, name));
    printf("%s\n", name1);
    printf("%s", name3);

    //     for (int i = 0; i < 20; i++)
    //     {
    //         name1[i] = name[i];

    //         printf("%c", name1[i]);
    //     }
    // }
    // printf("\nSize of array%d:", sizeof(name));
    // scanf("%[^\n]",name);
    // printf("\nlength of array%d:", strlen(name));
}
int main()
{
    function();
}