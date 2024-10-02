

/* 2. Write a program to calculate the average of numbers 
stored in an array of size 10. Take array values from 
the user. */

#include<stdio.h>

int main()
{
    int i,a[10],sum=0;
    float f;

    printf("Enter 10 numbers: ");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        sum = sum+a[i];
    }
    f = sum/10.0;
    printf("Sum of 10 no is: %f",f);
    return 0;
}
