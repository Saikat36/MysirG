// Write a program to print first 10 odd natural number in reverse order

#include<stdio.h>
#include<conio.h>


int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    while(N>=1)
    {
        if(N&1==1)
        {
            printf("%d \n",N);
        }
        N-=2;
    }
    return 0;
}