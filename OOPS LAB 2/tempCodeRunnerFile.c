//Q7. Wap to create Emp structure having empno, ename, esal. Use input() to take input and display function for display it.

#include <stdio.h>

typedef struct
{
    char ename[30];
    int empno;
    int esal;

} Employee;
int main()
{
    int i, n = 2;
    Employee emp[n];
    printf("Enter %d Employee Details \n \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Employee %d:- \n", i + 1);
        printf("Name: ");
        gets(emp[i].ename);
        printf("Id: ");
        scanf("%d", &emp[i].empno);
        printf("Salary: ");
        scanf("%d", &emp[i].esal);
        printf("\n");
        fflush(stdin);
    }
    printf("-------------- All Employees Details ---------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Name \t: ");
        printf("%s \n", emp[i].ename);

        printf("Id \t: ");
        printf("%d \n", emp[i].empno);

        printf("Salary \t: ");
        printf("%d \n", emp[i].esal);

        printf("\n");
    }

    return 0;
}