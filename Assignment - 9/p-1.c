

/* Write  programe to calculate HCF of two numbers */


#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y, store;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            store = i;
        }
    }
    printf("The LCM of two numbers %d and %d is %d.", x, y, store);
    printf("\n");
    return 0;
}
