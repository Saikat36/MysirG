/* write a programe to print first N term of Fibonacci series */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        c = a + b;
        printf("%d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}