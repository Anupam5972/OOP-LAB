//Q1. Wap to create an Dynamic Array and display elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int i, n = 0;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("ENTER THE ELEMENTS: ");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    printf("~~~~~~ Array elements are ~~~~~ \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}