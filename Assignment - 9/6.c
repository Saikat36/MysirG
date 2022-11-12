/* Write  programe to calculate factorial of a number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }

    printf("Sum is - %d", sum);

    printf("\n");
    return 0;
}