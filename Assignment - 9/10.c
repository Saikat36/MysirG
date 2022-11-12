/* write a programe to reverse a given number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x, rem, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    while (x != 0)
    {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x = x / 10;
    }
    printf("Reversed Number: %d", reverse);

    printf("\n");
    return 0;
}