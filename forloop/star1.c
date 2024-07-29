#include <stdio.h>

int main()
{
    for (int i = 0; i  <  5; i++) {
        // Printing spaces
        for (int j = 0; j  <  i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = i; j  <  5; j++) {
            printf("* ");
        }
        printf("\n");
    }

}
// #include <stdio.h>


