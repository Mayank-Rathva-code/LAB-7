/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION*/

#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int marks;
    int roll_number;

} std;

void read(std students[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter information of student %d:\n", i + 1);

        printf("Enter name= ");
        scanf("%s", students[i].name);

        printf("Enter roll number= ");
        scanf("%d", &students[i].roll_number);

        printf("Enter marks= ");
        scanf("%d", &students[i].marks);
    }
}

void display(std students[])
{
    printf("\nStudents with marks greater than 500:\n");

    for (int i = 0; i < 10; i++)
    {
        if (students[i].marks > 500)
        {
            printf("\nName= %s\n", students[i].name);
            printf("Roll Number= %d\n", students[i].roll_number);
            printf("Marks= %d\n", students[i].marks);
        }
    }
}

int main()
{
    std students[10];
    read(students);
    display(students);

    return 0;
}