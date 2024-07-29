#include <stdio.h>
#include <string.h>
struct student
{

    int mark;
    int rollno;
    char name[20];
};

int main()
{
    int mark1;
    int rollno2;
    char name1[20];
    struct student student;
    printf("\nEnter the student name:");
    scanf("%s", &student.name);

    printf("\nEnter the student mark:");
    scanf("%d", &student.mark);

    printf("\nEnter the student Roll.no:");
    scanf("%d", &student.rollno);
    
    strcpy(student.name, name1);
    student.mark = mark1;
    student.rollno = rollno2;

    printf("\nStudent marks is:%d\nRollno is: %d", student.mark, student.rollno);
    printf("\nName of the student is:%s", student.name);
}