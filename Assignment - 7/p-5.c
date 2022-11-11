
/* Write a program where user can enter 3 numbe, if one of the number is even then print you win and if all of the entered no is odd then print Game over */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, x;

    for (i = 1; i <= 3; i++)
    {
        printf("\nEnter an Even Number: ");
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            break;  /* break keyword LOOP ke End kore,if condition kono Loop noi,for akta loop */
        }
    }

    if (i == 4)
    {
        printf("Game Over");
    }
    else
    {
        printf("You Win");
    }

    printf("\n");
    return 0;
}