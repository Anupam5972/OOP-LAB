// Q2. WAP to display third highest marks of entered students
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll_no, marks;
    char name[25];
} stud[100], t;

void main()
{
    int i, j, n;
    printf("No of students:\n");
    scanf("%d", &n);
    printf("Enter students roll_no , name and marks:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &stud[i].roll_no, stud[i].name, &stud[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (stud[j].marks < stud[j + 1].marks)
            {
                t = stud[j];
                stud[j] = stud[j + 1];
                stud[j + 1] = t;
            }
        }
    }

    printf("\nSorted:\n");
    printf("-------------------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll No: %d\t\t\t Name: %s\t\t\t Marks%d\n", stud[i].roll_no, stud[i].name, stud[i].marks);
    }

    printf("-------------------------------------------------------------------------------\n");

    printf("\n Third Highest Marks: \n");
    printf("Roll No: %d\t\t\t Name: %s\t\t\t Marks%d\n", stud[2].roll_no, stud[2].name, stud[2].marks);
}