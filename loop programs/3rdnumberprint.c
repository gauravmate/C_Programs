#include <stdio.h>

int main() {
    int lower, upper;

  
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Every third number between %d and %d:\n", lower, upper);

    for (int i = lower; i <= upper; i += 3) {
        printf("%d\n", i);
    }

    return 0;
}
