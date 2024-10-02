

/* write a programe to find Nth term of the Fibonacci series */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c);
    printf("\n");
    return 0;
}