//Q2. Wap to allocate memory for 5 no and display it by using malloc.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int i, len = 5;

    ptr = (int *)malloc(len * sizeof(int));

    printf("ENTER THE ELEMENTS: ");

    for (i = 0; i < len; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements stored using malloc: \n");
    for (i = 0; i < len; ++i)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}