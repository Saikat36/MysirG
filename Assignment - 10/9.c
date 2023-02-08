/* write a programe to check wheather a given number is an Armstrong number or not */

#include <stdio.h>

int main()
{
    int x, y, n = 0, sum = 0, d, p, i;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = x;
    while (y)
    {
        y = y / 10;
        n++;
    }

    for (y = x; y; y = y / 10)
    {
        d = y % 10;

        for (p = 1, i = 1; i <= n; i++)
        {
            p = p * d;
        }
        sum = sum + p;
    }

    if (sum == x)
    {
        printf("%d is an armstrong number", x);
    }
    else
    {
        printf("%d is not an armstrong number", x);
    }
    
    printf("\n");
    return 0;
}