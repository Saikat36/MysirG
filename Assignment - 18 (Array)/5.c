

/* 5. Write a program to find the smallest number stored 
in an array of size 10. Take array values from the user.
 */


#include<stdio.h>

int main()
{
    int i,a[10],min;

    printf("Enter 10 numbers: \n");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }

    min = a[0];

    for ( i = 1; i <=9; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
        
    }
    printf("Min no is: %d",min);
    return 0;
}
