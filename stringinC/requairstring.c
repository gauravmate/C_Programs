#include <stdio.h>
void requ()
{
    char name[20];
    int i;
    printf("\nEnter the String:");
    scanf("%[^\n]",&name);
  //  gets(name);
   printf("\n%s",name);
   // puts(name);

}

int main()
{
    requ();
}