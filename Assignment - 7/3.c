// Write a program to print first 10 natural number in reverse order

#include<stdio.h>
#include<conio.h>


int main()
{
    int i=1, N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    while (N>=i)
    {
        printf("%d \n",N);
        N--;

    }
    return 0;
}