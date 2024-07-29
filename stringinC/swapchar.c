#include <stdio.h>
void swap()
{
    char name[] = {'G', 'a', 'u', 'r', 'a', 'v', '\0'};
    // char var[]={'G','\0'};
     int swap = name[0];
        name[0]=name[5];
        name[5]=swap;
    for (int i = 0; i < 6; i++)
    {
        // char temp[]=var[];
       

        printf("%c", name[i]);
    }
}
int main()
{
    swap();
}