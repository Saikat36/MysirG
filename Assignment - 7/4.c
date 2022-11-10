// Write a program to print first 10 odd natural numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d \n", i);
        i += 2;
    }
    return 0;
}