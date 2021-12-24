//Q6. Wap to create student structure having roll, name, mark1, mark2, mark3 and display sum(), avg() using pointer to structure in C.

#include <stdio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[20];
        int m1, m2, m3, total;
        float average;
    };
    struct student s[20], t;
    int i, j, n;
    printf("\n Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the roll no: ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter the name: ");
        scanf("%s", s[i].name);
        printf("\nEnter the marks 1:");
        scanf("%d", &s[i].m1);
        printf("\nEnter the marks 2: ");
        scanf("%d", &s[i].m2);
        printf("\nEnter the marks 3: \n");
        scanf("%d", &s[i].m3);
        s[i].average = (s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].average < s[j].average)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("\n----------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\n----------------------------------------------\n");
        printf("\n rollno = %d", s[i].rollno);
        printf("\n name = %s", s[i].name);
        printf("\n mark1 = %d", s[i].m1);
        printf("\n mark2 = %d", s[i].m2);
        printf("\n mark3 = %d", s[i].m3);
        printf("\n average = %.2lf", s[i].average);
        printf("\n Total = %d", s[i].m1 +s[i].m2 +s[i].m3);
    }
}
