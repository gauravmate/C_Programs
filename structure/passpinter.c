#include <stdio.h>
struct sample
{
    char name[20];
};
void demofuction(struct sample *samp)
{
    strcpy(samp->name, "mate");
    printf("\n%s", samp->name);
}

int main()
{
    struct sample sam = {"gaurav"};
    printf("%s", sam.name);
    demofuction(&sam);
}
