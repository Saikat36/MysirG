/* Write programe to check whether a given number is a prime number or not */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 2; i <= x; i++)
    {
        while (x % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 1)
    {
        printf("%d is a prime number", x);
    }
    else
    {
        printf("%d is not a prime number", x);
    }

    printf("\n");
    return 0;
}
