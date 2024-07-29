#include <stdio.h>
int main()
{
    int a = 20;
    printf("A is%d\n",a);
    a++;
    printf("A is%d\n",a);
    // pre-increment
    printf("per-increment%d\n", a++);
    printf("per-increment%d\n", a++);

    // post-increment
    printf("post-increment%d\n", ++a);
    printf("post-increment%d\n", ++a);

    // pre-decrement
    printf("per-decrement%d\n", a--);
    printf("per-decrement%d\n", a--);

    // post-decrement
    printf("post-decrement%d\n", --a);
    printf("post-decrement%d\n", --a);
}