// Write a program to print first 10 even natural number in reverse order

#include<stdio.h>
#include<conio.h>


int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    while(N>=1)
    {
        if(N%2==0)
        {
            printf("%d \n",N);
        }
        N--;
    }
    return 0;
}