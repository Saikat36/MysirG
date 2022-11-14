/* Write  programe to calculate factorial of a number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, Factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        Factorial = Factorial * i;
    }

    printf("%d Factorial is - %d",x,Factorial);

    printf("\n");
    return 0;
}