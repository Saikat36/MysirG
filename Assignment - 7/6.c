// Write a program to print first 10 even natural numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N )
    {   
        if (i % 2 == 0)
        {
            printf("even numbers are - %d\n", i);
        }
        
        i++;
    }
    return 0;
}