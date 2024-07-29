#include <stdio.h>
int main()
{
    int mark=90;
    // printf("Enter the mark");
    // scanf("%d", &mark);
    if (mark >= 40)
    {
        if (mark >= 60)
        {

            if (mark >= 75)
            {
                printf("Grade A");
            }

            else
            {
                printf("Grade B");
            }
        }
        else
        {
            printf("Grade C");
        }
    }else {
        printf("Grade F");
    }
        return 0;
    }