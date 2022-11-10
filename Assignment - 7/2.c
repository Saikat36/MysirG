// Write a program to print first 10 natural number 

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1, N;
    printf("Enter a Number : ");
    scanf("%d",&N);

    while (i<=N)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
}