
/* 8. Write a program to find the second smallest number in an array.Take array values
from the user. */

#include<stdio.h>

int main()
{
    int i,a[10],min,second_min;
    
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1])
    {
        min=a[0];
        second_min=a[1];
    }
    else
    {
        min=a[1];
        second_min=a[0];
    }
/* ********************************************************* */
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        }
    }
/* ********************************************************* */
    printf("\nSecond smallest number is %d",second_min);
    printf("\n");
    return 0;
}
