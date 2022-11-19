

/* Write a program to calculate sum of squares of first N natural numbers */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        sum = sum + (i * i);
    }
    printf("%d sum of squares is %d",x,sum);
    return 0;
}