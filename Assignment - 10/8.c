/* write a programe to find next prime number of a given number */

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int x = n + 1;     ; x++)  // majha kono condition nai = infinity loop
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }

        if (i == x)
        {
            printf("Next Prime Number is %d", x);
            break;
        }
    }

    printf("\n");
    return 0;
}