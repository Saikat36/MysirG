

// Write a program to print first 10 odd natural number in reverse order

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (N >= i)
    {
        if (N & 1)
        {
            printf("%d \n", N);
        }
        N--;
    }
    return 0;
}