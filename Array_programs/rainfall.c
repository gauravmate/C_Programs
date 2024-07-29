#include <stdio.h>
void avg()
{
    float rainfall[7];
    float total, average;

    for (int i = 1; i <= 7; i++)
    {
        printf("Enter rainfall for day %d (in mm): ", i);
        scanf("%f", &rainfall[i]);
        total = total + rainfall[i];
    }
    average = total / 7;
    printf("Rainfall in week is:%f\n", average);
}
int main()
{
    avg();
}