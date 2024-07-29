#include <stdio.h>
char grade(int Rnumber, int mark)
{

    if (mark >= 90)
    {
        return 'A';
    }
    else if (mark >= 75 )
    {
        return 'B';
    }
    else if (mark >= 60 )
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

int main()
{
    int Rnumber, mark;

    printf("\nEnter the Roll Number:");
    scanf("%d", &Rnumber);
    printf("\nEnter the Mark:");
    scanf("%d\n", &mark);
    
    char value=grade(Rnumber, mark);

    printf("Roll Number :%d\n",Rnumber);
    printf("Marks :%d\n",mark);
    printf("Grade :%c\n",value);

    return 0;


}
// 1.Accept roll number(integer) and aggregate marks(decimal value) from the user in main() function. Write a function that accepts
// roll number and marks as parameters and return the grade as per the following data:
// §marks >= 90 - grade A
// §marks >= 75 and marks <= 90  - grade B
// §marks >= 60 and marks <= 75  - grade C
// §marks <60 – grade D
// [Hint: Pass by value and returns the value.]
