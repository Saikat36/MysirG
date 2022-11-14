/* Write  programe to count degits in a given numbers */

#include <stdio.h>
int main()
{
    int n, count = 0; // variable declaration
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("The number of digits in an integer is : %d", count);

    return 0;
}
