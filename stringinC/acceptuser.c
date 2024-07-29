#include <stdio.h>
void user()
{
    char name[20];
    int i;
    printf("\nEnter the String:");
    for (i = 0; i <20; i++)
    {
        scanf("%c", &name[i]);
    }
    // name[20] = '\0';
   // printf("\n");

    printf("\nPrint array is:\n");
    for (i = 0; i < 20; i++)
    {
           printf("%c", name[i]);
    }
          //name[i] = '\0';
         printf("\n");
}

int main()
{
    user();
}