
/* Write a program to add numbers entired by user. user can enter any number until he enters 0 */


#include <stdio.h>

int main()
{
    int i, x, s = 0;

    printf("\nEnter Numbers (Last Number should be 0) : "); // 10, 20, 30, 0;

    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }

        s = s + x; // 10 + 20 + 30 + 0 = 60;
    }
    printf("Sum is %d", s);
    printf("\n");
    return 0;
}