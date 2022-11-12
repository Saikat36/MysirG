/* Write a programe to calculate sum of first N even natural numbers */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, N, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i = i + 2)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    printf("\n");
    return 0;
}