
/* write a programe to check wheather a given number in the Fibonacci series or not */

#include <stdio.h>

int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0;    ; i++)
    {
        c = a + b;
        if (c == n)
        {
            printf("%d is %d term in the series", n, i);
            break;
        }
        if (c > n)
        {
            printf("%d is not in the series", n);
            break;
        }

        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}