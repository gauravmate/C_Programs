#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct studentdata
{

    int mark, rollno;
    char name1[20];
};

int main()
{
    int number, extranum;
    struct studentdata *data = malloc(number * sizeof(struct studentdata));
    printf("\nHow many data you want to store:");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", &data[i].name1);
        printf("Enter the Rollno: ");
        scanf("%d", &data[i].rollno);
        printf("Enter the Mark: ");
        scanf("%d", &data[i].mark);
    }

    for (int i = 0; i < number; i++)
    {
        printf("\n\nDetails of student %d:", i + 1);
        printf("\nName: %s", (data + i)->name1);
        printf("\nRollno: %d", (data + i)->rollno);
        printf("\nMark: %d", (data + i)->mark);
        // free(data);
    }
    printf("\nHow many data you want to store ones again:");
    scanf("%d", &extranum);
    data = realloc(data, (extranum + number) * sizeof(struct studentdata));
    for (int i = number; i < extranum + number; i++)
    {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", &data[i].name1);
        printf("Enter the Rollno: ");
        scanf("%d", &data[i].rollno);
        printf("Enter the Mark: ");
        scanf("%d", &data[i].mark);
    }
    for (int i = 0; i < number + extranum; i++)
    {
        printf("\n\nDetails of student %d:", i + 1);
        printf("\nName: %s", (data + i)->name1);
        printf("\nRollno: %d", (data + i)->rollno);
        printf("\nMark: %d", (data + i)->mark);
        free(data);
    }
}