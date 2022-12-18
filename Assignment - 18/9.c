

/* 9. Write a program to sort an array of 10 elements in
descending order. */

#include <stdio.h>

int main()
{
    int i, a[10], r, t;

    printf("Enter 10 numbers: \n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (r = 1; r <= 9; r++)
    {
        for (i = 0; i <= 9 - r; i++)
        {
            if (a[i] < a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }

    printf("\n\n");
    for (i = 0; i <= 9; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}