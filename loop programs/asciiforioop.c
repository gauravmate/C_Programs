#include <stdio.h>
int main()
{
    int i;
      printf("ASCII Table:\n");
    printf("============\n");
    printf("Dec\tChar\n");
    printf("-------------\n");

    for (i = 6; i <= 90; i++)
    {
        printf("%3d\t%c\n", i, (char)i);
    }
}