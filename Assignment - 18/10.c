

/* 10. Write a program in C to copy the elements of one
array in to another array.Take array values from the user. */

#include <stdio.h>

int main()
{
    int i, a[10], b[10];

    printf("Enter 10 numbers:\n");

    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 9; i++)
        b[i] = a[i];

    for (i = 0; i <= 9; i++)
        printf("%d", b[i]);

    printf("\n");
    return 0;
}