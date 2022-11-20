/* write a programe to print all Armstrong numbers under 1000 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, n = 0, sum = 0, d, p, i;

    for (x = 0; x <= 1000; x++)
    {

        y = x;
        n = 0;

        while (y)
        {
            y = y / 10;
            n++;
        }

        for (y = x, sum = 0;     y  ;  y = y / 10)
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
            printf("%d is an armstrong number\n", x);
        }
    }

    printf("\n");
    return 0;
}