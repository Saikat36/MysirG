

/* 3. Write a program to calculate the sum of all even numbers
 and sum of all odd numbers, which are stored in an array
  of size 10. Take array values from the user. */

#include <stdio.h>

int main()
{
    int i, a[10], sum_even = 0, sum_odd = 0;

    printf("Enter 10 numbers: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if ((a[i] & 1) == 0)
        {
            sum_even = sum_even + a[i];
        }
        else
        {
            sum_odd = sum_odd + a[i];
        }
    }
    printf("Sum of 10 no is: %d\n", sum_even);
    printf("Sum of 10 no is: %d", sum_odd);

    return 0;
}
